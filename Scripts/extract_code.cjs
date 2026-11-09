const fs=require('fs'),path=require('path');
const base=path.resolve(__dirname,'..'),run=path.resolve(base,'../../Results/Run-20261109-095015-15c6c9');
const dump=fs.readFileSync(path.join(run,'dump.cs'),'utf8'),lines=dump.split(/\r?\n/),classes=[];
let ns='',current;
for(let i=0;i<lines.length;i++){
 const l=lines[i];if(l.startsWith('// Namespace: '))ns=l.slice(14).trim();
 const m=l.match(/^(.*?)\s+(class|struct|enum|interface)\s+(.+?)\s*\/\/ TypeDefIndex: (\d+)/);
 if(m){if(current){current.end=i;current.text=lines.slice(current.line-1,i).join('\n');classes.push(current);}current={name:m[3].split(' : ')[0],kind:m[2],declaration:l,namespace:ns,id:+m[4],line:i+1};}
}
if(current){current.text=lines.slice(current.line-1).join('\n');current.end=lines.length;classes.push(current);}
const game=classes.filter(c=>c.id>=3073&&c.id<4230);
for(const c of game){c.file='Evidence/Classes/'+c.id+'.cs';fs.writeFileSync(path.join(base,c.file),c.text);}
fs.writeFileSync(path.join(base,'Data/classes.json'),JSON.stringify(game,null,2));
const native=path.join(run,'Native-20261109-095035-128dfe'),pc=path.join(native,'PseudoC');
const rows=fs.readFileSync(path.join(pc,'index.tsv'),'utf8').trim().split(/\r?\n/).slice(1).map(x=>{const [address,method,status,file]=x.split('\t');return{address,method,status,file}});
const focus=rows.filter(r=>/Rotatelab|BoosterPreventController|MetaProgressionSo|RotateAnalytics|ShopBundleSO|ShopPackSO/.test(r.method));
for(const r of focus){if(r.status==='OK'){r.evidence='Evidence/Native/'+r.file;fs.copyFileSync(path.join(pc,r.file),path.join(base,r.evidence));}}
fs.writeFileSync(path.join(base,'Data/native_focus.json'),JSON.stringify(focus,null,2));
const s=JSON.parse(fs.readFileSync(path.join(run,'script.json'),'utf8').replace(/^\uFEFF/,''));
const failureReasons={};for(const r of rows.filter(r=>r.status!=='OK')){const k=r.status.replace(/Exception while decompiling[^:]*:/,'Exception:');failureReasons[k]=(failureReasons[k]||0)+1;}
const summary={source:run,version:'0.6.3',package:'com.rotatelab.cubeblast',architecture:'armeabi-v7a',metadata:39,assemblies:(dump.match(/^\/\/ Image /gm)||[]).length,types:classes.length,gameTypes:game.length,scriptCounts:Object.fromEntries(Object.entries(s).map(([k,v])=>[k,Array.isArray(v)?v.length:null])),matched:rows.length,exported:rows.filter(r=>r.status==='OK').length,failed:rows.filter(r=>r.status!=='OK').length,failureReasons,analysisTimeoutSeconds:1800,focusMethods:focus.length};
fs.writeFileSync(path.join(base,'Data/run_summary.json'),JSON.stringify(summary,null,2));
fs.writeFileSync(path.join(base,'Data/native_failures.json'),JSON.stringify(rows.filter(r=>r.status!=='OK'),null,2));
for(const f of ['inputs.json','dumper.log'])fs.copyFileSync(path.join(run,f),path.join(base,'Evidence',f));
fs.copyFileSync(path.join(native,'ghidra.log'),path.join(base,'Evidence/ghidra.log'));
console.log(summary);console.log('SYSTEMS',game.filter(c=>!/[<>]/.test(c.name)&&/Booster|Blaster|Dock|Voxel|Target|Daily|Reward|Leader|Event|Offer|Pass|Shop|Level|Grid|RotateAnalytics/.test(c.name)).map(c=>c.id+' '+c.name).join('\n'));
