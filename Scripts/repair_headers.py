"""Repair script-reference headers in the already extracted main-file evidence."""
import sys,json,pathlib,struct
BASE=pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0,str(BASE.parents[1]/'Analysis/FoodiePop/.deps'))
import UnityPy
root=pathlib.Path(r'D:\APK Decompiler\AssetRipper_win_x64\temp\9d3a\a0a1ee5d\assets\bin\Data')
env=UnityPy.load(str(root));objects={(o.assets_file.name,str(o.path_id)):o for o in env.objects}
records=json.loads((BASE/'Data/asset_records.json').read_text(encoding='utf8'))
fixed=0
for r in records:
    if r['source']!='bin_Data' or r['type']!='MonoBehaviour':continue
    o=objects[(r['serialized'],r['path_id'])]
    fid,pid=struct.unpack_from('<iq',o.get_raw_data(),16)
    p=BASE/r['file'];t=json.loads(p.read_text(encoding='utf8'))
    t['m_Script']={'m_FileID':fid,'m_PathID':str(pid)}
    p.write_text(json.dumps(t,ensure_ascii=False,indent=2),encoding='utf8');fixed+=1
print('Repaired native script-reference headers:',fixed)
