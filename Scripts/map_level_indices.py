"""Resolve SoLevelsData order through Addressables 2.9.1 binary catalog.

Format reference: Unity's official com.unity.addressables 2.9.1 package,
Runtime/ResourceLocators/ContentCatalogData.cs and
Runtime/ResourceManager/Util/BinaryStorageBuffer.cs.
Only string keys and resource-location fields needed for GUID resolution
are read. No game files are modified.
"""
import pathlib,struct,json,sys,hashlib,re
BASE=pathlib.Path(__file__).resolve().parents[1]
WORK=BASE.parents[1]
sys.path.insert(0,str(WORK/'Analysis/FoodiePop/.deps'))
import UnityPy
ROOT=pathlib.Path(r'D:\APK Decompiler\AssetRipper_win_x64\temp\9d3a\a0a1ee5d\assets\aa')
catalog=ROOT/'catalog.bin';data=catalog.read_bytes()
def value(offset):return struct.unpack_from('<I',data,offset)[0]
def text(ref,sep='\0'):
    if ref==0xffffffff:return None
    if sep!='\0' and ref&0x40000000:
        parts=[];seen=set()
        while ref!=0xffffffff:
            assert ref not in seen,'Cyclic dynamic string'
            seen.add(ref)
            head,ref=struct.unpack_from('<II',data,ref&0x3fffffff)
            parts.append(text(head))
        return sep.join(reversed(parts))
    offset=ref&0x3fffffff;size=value(offset-4)
    assert offset+size<=len(data)
    return data[offset:offset+size].decode('utf-16-le' if ref&0x80000000 else 'ascii')
def key(ref):
    type_ref,obj_ref=struct.unpack_from('<II',data,ref)
    assembly_ref,class_ref=struct.unpack_from('<II',data,type_ref)
    if text(class_ref,'.')!='System.String':return None
    return text(value(obj_ref),chr(struct.unpack_from('<H',data,obj_ref+4)[0]))
header=struct.unpack_from('<8I',data)
assert header[1]==2,'Unsupported catalog version'
keys_offset=header[2];key_count=value(keys_offset-4)//8
locations={}
for i in range(key_count):
    key_ref,set_ref=struct.unpack_from('<II',data,keys_offset+i*8)
    name=key(key_ref)
    if not name:continue
    locs=[]
    for j in range(value(set_ref-4)//4):
        location_ref=value(set_ref+j*4)
        primary,internal,provider,deps,dep_hash,extra,type_id=struct.unpack_from('<7I',data,location_ref)
        locs.append(dict(primary_key=text(primary,'/'),internal_id=text(internal,'/'),provider=text(provider,'.'),location_offset=location_ref))
    locations[name]=locs
assets=json.loads((BASE/'Data/asset_records.json').read_text(encoding='utf8'))
levels_record=next(r for r in assets if r['cls']=='SoLevelsData')
level_refs=json.loads((BASE/levels_record['file']).read_text(encoding='utf8'))['Levels']
asset_by_object={(r['source'],r['path_id']):r for r in assets if r['cls']=='SoLevelData'}
containers={}
for f in sorted((ROOT/'Android').glob('levels_assets_*.bundle')):
    env=UnityPy.load(str(f))
    for asset_path,ptr in env.container.items():
        match=asset_by_object.get((f.name,str(ptr.path_id)))
        if match:
            existing=containers.get(asset_path.lower())
            assert existing is None or existing['file']==match['file'],f'Ambiguous container path: {asset_path}'
            containers[asset_path.lower()]=match
mapped=[]
for index,ref in enumerate(level_refs):
    guid=ref['m_AssetGUID'];candidates=locations.get(guid,[])
    matches=[]
    for loc in candidates:
        r=containers.get(loc['internal_id'].lower())
        if r:matches.append((r,loc))
    # Catalog can expose the same asset with multiple resource-type locations.
    matches=list({(r['file'],loc['internal_id']):(r,loc) for r,loc in matches}.values())
    assert len(matches)==1,f'GUID {guid} index {index}: expected one distinct asset, got {len(matches)}'
    r,loc=matches[0]
    mapped.append(dict(level_index=index,level_number=index+1,guid=guid,name=r['name'],source=r['source'],path_id=r['path_id'],asset_file=r['file'],internal_id=loc['internal_id'],catalog_location_offset=loc['location_offset'],supports_loop=bool(ref.get('SupportsLoop'))))
assert len(mapped)==850
out=dict(source=str(catalog),sha256=hashlib.sha256(data).hexdigest(),catalog_version=header[1],key_count=key_count,levels_source=levels_record['file'],method='SoLevelsData.Levels array -> AssetGUID string key -> catalog internal_id -> AssetBundle container -> SoLevelData path_id',index_base=0,display_level_base=1,scope='Packaged base catalog; runtime overrides, A/B and round mode may select other content.',mapped=len(mapped),levels=mapped)
(BASE/'Data/level_index_mapping.json').write_text(json.dumps(out,ensure_ascii=False,indent=2),encoding='utf8')
print('MAPPED',len(mapped),'UNIQUE_ASSETS',len({r['asset_file'] for r in mapped}))
for r in mapped[:15]:print(r['level_index'],r['level_number'],r['name'],r['source'])
