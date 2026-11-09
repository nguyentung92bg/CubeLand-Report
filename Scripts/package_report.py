"""Package the offline report with evidence and regeneration scripts."""
import pathlib,zipfile,json
base=pathlib.Path(__file__).resolve().parents[1]
target=base/'CubeLand-Report.zip'
files=[p for p in base.rglob('*') if p.is_file() and p.suffix!='.zip' and '__pycache__' not in p.parts]
with zipfile.ZipFile(target,'w',zipfile.ZIP_DEFLATED,compresslevel=6) as archive:
    for p in files:archive.write(p,p.relative_to(base).as_posix())
with zipfile.ZipFile(target) as archive:
    assert archive.testzip() is None
    assert 'LevelDesign.html' in archive.namelist()
    assert 'Data/qa.json' in archive.namelist()
print(json.dumps({'archive':str(target),'files':len(files),'bytes':target.stat().st_size,'crc_verified':True}))
