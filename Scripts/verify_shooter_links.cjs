const {chromium}=require('C:/Users/nguye/.cache/codex-runtimes/codex-primary-runtime/dependencies/node/node_modules/playwright');
const fs=require('fs'),path=require('path'),{pathToFileURL}=require('url');
const base=path.resolve(__dirname,'..'),data=JSON.parse(fs.readFileSync(path.join(base,'Data/shooter_links.json'),'utf8'));
const assert=(v,m)=>{if(!v)throw Error(m)};
(async()=>{
 assert(data.length===850,'All 850 level records');assert(data.every(l=>l.links.unresolved.length===0),'All shooter references resolved');
 const l13=data.find(l=>l.levelNumber===13),l16=data.find(l=>l.levelNumber===16),l401=data.find(l=>l.levelNumber===401);
 assert(l13.links.connected.length===4&&l13.links.connected.every(g=>g.members.length===2&&g.edges.length===1),'Level 13: four pairs, no reverse-edge double count');
 assert(l16.links.connected.some(g=>g.members.length===3&&g.edges.length===2),'Level 16: multi-hop three-shooter group');
 assert(l401.links.chained.length===2&&l401.links.chained.every(g=>g.members.length===3&&g.edges.length===2),'Level 401: two three-member chains');
 const both=data.find(l=>l.links.connected.length&&l.links.chained.length);assert(both,'Coexisting link types');
 const browser=await chromium.launch({headless:true,channel:'msedge'}),p=await browser.newPage({viewport:{width:1440,height:1050}}),errors=[];p.on('pageerror',e=>errors.push(e.message));
 await p.goto(pathToFileURL(path.join(base,'Items/Items.html')).href+'#shooter-links');assert(await p.locator('#shooter-links').count()===1,'Documentation anchor');assert((await p.locator('#shooter-links').innerText()).includes('0,25'),'Break-chain timing explained');await p.locator('#shooter-links').screenshot({path:path.join(base,'Data/shooter-links-doc-desktop.png')});
 await p.setViewportSize({width:390,height:844});assert(await p.evaluate(()=>document.documentElement.scrollWidth<=innerWidth),'Documentation mobile overflow');await p.locator('#shooter-links').screenshot({path:path.join(base,'Data/shooter-links-doc-mobile.png')});
 for(const [n,type,groups,size] of [[13,'connected',4,2],[401,'chained',2,3],[both.levelNumber,'both',null,null]]){
  await p.setViewportSize({width:1440,height:1050});await p.goto(pathToFileURL(path.join(base,'Levels/Levels.html')).href+'?level='+n);await p.locator('.level-open:visible').click();await p.waitForSelector('#shooter-connections');
  if(type==='connected'){assert(await p.locator('.connected-group').count()===groups,'Connected diagrams');assert(await p.locator('.group-edge').count()===4,'Actual unique connected edges');}
  if(type==='chained'){assert(await p.locator('.chain-group').count()===groups,'Chain diagrams');assert(await p.locator('.chain-edge').count()===4,'Actual chain topology');}
  if(type==='both'){assert(await p.locator('.connected-group').count()>0&&await p.locator('.chain-group').count()>0,'Both link types in same level');}
  await p.locator('.highlight-link').first().click();const selected=await p.locator('.shooter.link-selected').count();if(size)assert(selected===size,'Highlight exact group members');assert(await p.locator('.shooter.link-dim').count()>0,'Other shooters dimmed');await p.locator('#clear-link-highlight').click();assert(await p.locator('.link-selected,.link-dim').count()===0,'Clear highlight');
  if(type!=='both'){await p.locator('#shooter-connections').screenshot({path:path.join(base,'Data/shooter-links-'+n+'-desktop.png')});await p.setViewportSize({width:390,height:844});assert(await p.locator('#level-dialog').evaluate(d=>d.scrollWidth<=d.clientWidth),'Dialog link diagrams mobile overflow');await p.locator('#shooter-connections').screenshot({path:path.join(base,'Data/shooter-links-'+n+'-mobile.png')});}
 }
 assert(!errors.length,'Browser JS errors: '+errors.join(';'));
 fs.writeFileSync(path.join(base,'Data/shooter_links_qa.json'),JSON.stringify({passed:true,levels:data.length,connectedLevels:data.filter(l=>l.links.connected.length).length,chainedLevels:data.filter(l=>l.links.chained.length).length,bothTypes:data.filter(l=>l.links.connected.length&&l.links.chained.length).length,checks:['850 levels, zero unresolved shooter references','Level 13 exact four-pair topology','Level 16 transitive three-member group','Level 401 exact chain topology','both link types coexist','actual SVG edges','highlight and reset shooter groups','desktop/mobile diagrams and documentation','no browser JS errors']},null,2));
 await browser.close();console.log('PASS: shooter link topology, documentation, diagrams, highlighting and mobile layout');
})().catch(e=>{console.error(e);process.exit(1)});
