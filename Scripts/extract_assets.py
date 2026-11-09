import sys, pathlib, json, re, collections, struct, hashlib
BASE=pathlib.Path(__file__).resolve().parents[1]
WORK=BASE.parents[1]
sys.path.insert(0,str(WORK/'Analysis/FoodiePop/.deps'))
import UnityPy
from UnityPy.helpers.TypeTreeGenerator import TypeTreeGenerator
ROOT=pathlib.Path(r'D:\APK Decompiler\AssetRipper_win_x64\temp\9d3a\a0a1ee5d\assets')
RUN=WORK/'Results/Run-20261109-095015-15c6c9'
for d in ['Data','Evidence/Assets','Images/Levels','Images/UI']: (BASE/d).mkdir(parents=True,exist_ok=True)
records=[]; errors=[]; images=[]; counts=collections.Counter()
def safe(s):return re.sub(r'[^\w.-]','_',str(s))[:100]
def redact(v):
    if isinstance(v,dict):return {k:(str(x) if k=='m_PathID' else '[REDACTED]' if re.search(r'serverkey|apikey|secret|password|token',k,re.I) and isinstance(x,str) else redact(x)) for k,x in v.items()}
    if isinstance(v,list):return [redact(x) for x in v]
    return v
def save(rel,v): (BASE/rel).write_text(json.dumps(v,ensure_ascii=False,indent=2,default=str),encoding='utf-8')
def extract(env,source,generator=None):
    if generator:env.typetree_generator=generator
    assets={a.name:a for a in env.assets}
    def script_name(o):
        try:
            # Read native MonoBehaviour header directly. Generated typetrees may
            # misalign m_Script while still correctly decoding custom fields.
            fid,pid=struct.unpack_from('<iq',o.get_raw_data(),16)
            af=o.assets_file
            if fid: af=assets.get(pathlib.PurePosixPath(str(af.externals[fid-1].path).replace('\\','/')).name)
            return af.objects[pid].read_typetree().get('m_ClassName','') if af else ''
        except Exception:return ''
    for o in env.objects:
        counts[o.type.name]+=1
        try:
            if o.type.name in ['MonoBehaviour','TextAsset','PlayerSettings']:
                cls=script_name(o) if o.type.name=='MonoBehaviour' else o.type.name
                t=o.read_typetree();name=t.get('m_Name','')
                if o.type.name=='MonoBehaviour':
                    fid,pid=struct.unpack_from('<iq',o.get_raw_data(),16)
                    t['m_Script']={'m_FileID':fid,'m_PathID':pid}
                if o.type.name=='MonoBehaviour' and not (re.search(r'Level|Config|Booster|Daily|Reward|Shop|Offer|Pass|Satori|Leader|Event|City|Progress|Currency|Price|Tutorial|Save|Target|Voxel|Bomb|Wrapper|Dock|Blaster|Grid|Magnet|Vacuum|Wand|Bounce|Merge|Analytics',cls,re.I) or name and len(t)>5):continue
                if o.type.name=='MonoBehaviour' and not cls and len(t)<=4:continue
                key=f'{safe(source)}_{safe(o.assets_file.name)}_{o.path_id}_{safe(name or cls or "component")}'
                rel='Evidence/Assets/'+key+'.json';save(rel,redact(t))
                records.append(dict(name=name,cls=cls,type=o.type.name,source=source,serialized=o.assets_file.name,path_id=str(o.path_id),file=rel,keys=list(t)))
                if cls=='SoLevelData':
                    ref=t.get('Icon',{});target=o.assets_file.objects.get(ref.get('m_PathID'))
                    if target:
                        relimg='Images/Levels/'+key+'.png';target.read().image.save(BASE/relimg)
                        records[-1]['image']=relimg
            elif o.type.name=='Sprite':
                d=o.read();name=d.m_Name
                if not re.search(r'font|letter|keyboard',name,re.I):
                    rel='Images/UI/'+safe(source)+'_'+safe(o.assets_file.name)+'_'+str(o.path_id)+'_'+safe(name)+'.png'
                    im=d.image
                    if im.width>512 or im.height>512:im.thumbnail((512,512))
                    im.save(BASE/rel);images.append(dict(name=name,file=rel,source=source,path_id=o.path_id))
        except Exception as ex:errors.append(dict(source=source,serialized=o.assets_file.name,path_id=o.path_id,type=o.type.name,error=str(ex)[:220]))
bundles=sorted((ROOT/'aa/Android').glob('*.bundle'))
for i,f in enumerate(bundles):
    extract(UnityPy.load(str(f)),f.name)
    if i%20==0: print('Bundles',i+1,'/',len(bundles),'records',len(records),flush=True)
g=TypeTreeGenerator('6000.3.21f1');g.load_local_dll_folder(str(RUN/'DummyDll'))
extract(UnityPy.load(str(ROOT/'bin/Data')),'bin_Data',g)
save('Data/asset_records.json',records);save('Data/images.json',images)
save('Data/asset_extraction.json',dict(root=str(ROOT),unity='6000.3.21f1',bundles=len(bundles),types=dict(counts),records=len(records),images=len(images),errors=errors,redaction='Credential-like string fields redacted. Native MonoBehaviour script references resolved from raw headers.'))
print('DONE',len(records),len(images),'errors',len(errors),flush=True)
