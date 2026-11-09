const {chromium}=require('C:/Users/nguye/.cache/codex-runtimes/codex-primary-runtime/dependencies/node/node_modules/playwright');
const fs=require('fs'),path=require('path'),{pathToFileURL,fileURLToPath}=require('url');
const base=path.resolve(__dirname,'..'),manifest=JSON.parse(fs.readFileSync(path.join(base,'Data/report_manifest.json'),'utf8'));
const assert=(v,msg)=>{if(!v)throw Error(msg)};
(async()=>{
 const browser=await chromium.launch({headless:true,channel:'msedge'});const p=await browser.newPage({viewport:{width:1440,height:1050}}),errors=[],results=[];
 p.on('pageerror',e=>errors.push(e.message));
 for(const file of manifest.pages){
  await p.goto(pathToFileURL(path.join(base,file)).href);await p.waitForLoadState('load');
  const links=await p.locator('a[href],link[href],script[src],img[src]').evaluateAll(nodes=>nodes.map(n=>n.href||n.src));
  for(const href of links){const u=new URL(href);if(u.protocol==='file:')assert(fs.existsSync(fileURLToPath(u)),`Missing local resource: ${href}`);}
  assert(await p.locator('nav [aria-current="page"]').count()===1,'Navigation '+file);
  assert(!/FoodiePop|MatchFactory/.test(await p.locator('main').innerText()),'Unrelated game data '+file);
  if(file==='LevelDesign.html'||file==='Boosters/Boosters.html'){
   await p.locator('img').evaluateAll(imgs=>imgs.forEach(i=>i.loading='eager'));
   await p.waitForFunction(()=>[...document.images].every(i=>i.complete));
   assert(await p.locator('img').evaluateAll(imgs=>imgs.every(i=>i.naturalWidth>0)),'Image decoding '+file);
   await p.screenshot({path:path.join(base,'Data',file.startsWith('Boosters')?'boosters-desktop.png':'report-desktop.png'),fullPage:true});
  }
  await p.setViewportSize({width:390,height:844});const w=await p.evaluate(()=>({inner:innerWidth,scroll:document.documentElement.scrollWidth}));assert(w.scroll<=w.inner,'Mobile overflow '+file+JSON.stringify(w));
  if(file==='LevelDesign.html')await p.screenshot({path:path.join(base,'Data/report-mobile.png'),fullPage:true});
  results.push({file,mobile:w});await p.setViewportSize({width:1440,height:1050});
 }
 await p.goto(pathToFileURL(path.join(base,'Levels/Levels.html')).href);
 assert(await p.locator('tbody tr').count()===853,'850 level rows + 3 difficulty rows');
 const table=p.locator('.data-table').filter({has:p.locator('input.search')});
 await table.locator('input.search').fill('Sheep');assert(await table.locator('tbody tr:visible').count()>0,'Level search');
 await table.locator('button.level-open:visible').first().click();await p.waitForSelector('#voxel-view');
 assert((await p.locator('#detail-body').innerText()).includes('SolutionColumns'),'Full level detail');
 assert(await p.locator('.queue-col').count()>0,'Shooter queues');
 assert(await p.locator('#voxel-view').evaluate(c=>{let d=c.getContext('2d').getImageData(0,0,c.width,c.height).data;return d.some((v,i)=>i%4===3&&v>0)}),'Voxel canvas drew data');
 await p.locator('#yaw').fill('120');await p.locator('#yaw').dispatchEvent('input');
 await p.screenshot({path:path.join(base,'Data/level-detail-desktop.png'),fullPage:true});
 await p.setViewportSize({width:390,height:844});await p.screenshot({path:path.join(base,'Data/level-detail-mobile.png'),fullPage:true});
 assert(await p.locator('#level-dialog').evaluate(d=>d.getBoundingClientRect().width<=innerWidth),'Mobile dialog width');
 await p.locator('#close-detail').click();await table.locator('input.search').fill('NoSuchLevel_938291');assert(await table.locator('tbody tr:visible').count()===0,'Empty search');await table.locator('input.search').fill('');assert(await table.locator('tbody tr:visible').count()===50,'Pagination');await table.locator('.next').click();assert((await table.locator('.page-count').innerText()).includes('2 /'),'Next page');
 assert(!errors.length,'Browser errors: '+errors.join(';'));
 const assets=JSON.parse(fs.readFileSync(path.join(base,'Data/asset_records.json'),'utf8'));assert(assets.length===new Set(assets.map(a=>a.file)).size,'Evidence filenames unique');
 const levels=JSON.parse(fs.readFileSync(path.join(base,'Data/levels.json'),'utf8'));assert(levels.length===850&&new Set(levels.map(l=>l.id)).size===850,'Level count and unique IDs');
 for(const l of levels){assert(fs.existsSync(path.join(base,l.image)),'Level image '+l.id);assert(fs.existsSync(path.join(base,l.file)),'Level source '+l.id);}
 fs.writeFileSync(path.join(base,'Data/qa.json'),JSON.stringify({passed:true,pages:results,levelCount:levels.length,checks:['local navigation and resources','10 responsive pages at 390px','no unrelated game copy','images decoded','level search and pagination','offline chunk loading','voxel canvas','shooter queues','mobile detail dialog','unique evidence files','850 level icons and source records','no browser JS errors']},null,2));
 await browser.close();console.log('PASS: 10 pages, 850 levels, offline details, responsive layout, images, links, search and pagination');
})().catch(e=>{console.error(e);process.exit(1)});
