const {chromium}=require('C:/Users/nguye/.cache/codex-runtimes/codex-primary-runtime/dependencies/node/node_modules/playwright');
const fs=require('fs'),path=require('path'),{pathToFileURL}=require('url'),base=path.resolve(__dirname,'..');
const assert=(v,m)=>{if(!v)throw Error(m)};
(async()=>{
 const browser=await chromium.launch({headless:true,channel:'msedge'}),p=await browser.newPage({viewport:{width:1440,height:1050}}),errors=[];p.on('pageerror',e=>errors.push(e.message));
 const url=pathToFileURL(path.join(base,'Levels/Levels.html')).href;
 await p.goto(url);const table=p.locator('[data-level-catalog]'),feature=p.locator('#shooter-feature'),number=p.locator('#level-number');
 for(const [f,count,first] of [['type:1',61,40],['type:2',61,40],['type:3',25,120],['type:4',43,140],['type:5',35,301],['type:7',11,501],['type:8',12,701],['type:9',13,801],['flag:hidden',145,9],['flag:iced',99,30],['flag:doubleColor',33,80],['flag:pilot',29,351]]){
  await feature.selectOption(f);assert((await table.locator('.result-count').innerText()).startsWith(count+' /'),'Filter count '+f);assert((await table.locator('tbody tr:visible').first().innerText()).includes('Level '+first),'First level '+f);
 }
 await p.locator('#clear-level-filters').click();await number.fill('40');await feature.selectOption('type:1');assert(await table.locator('tbody tr:visible').count()===1,'Combined index and type filter');await table.locator('.level-open:visible').click();await p.waitForSelector('#special-shooters');
 assert((await p.locator('#special-shooters').innerText()).includes('Key')&&(await p.locator('#special-shooters').innerText()).includes('Lock'),'Level 40 Key/Lock details');assert(await p.locator('.special-shooter-table tbody tr').evaluateAll(rows=>rows.filter(r=>['Key','Lock'].includes(r.cells[1].textContent)).length)===4,'Two Key and two Lock records in level 40');await p.locator('#special-shooters').screenshot({path:path.join(base,'Data/shooter-specials-40-desktop.png')});
 await p.setViewportSize({width:390,height:844});assert(await p.locator('#level-dialog').evaluate(d=>d.scrollWidth<=d.clientWidth),'Special detail mobile overflow');await p.locator('#special-shooters').screenshot({path:path.join(base,'Data/shooter-specials-40-mobile.png')});await p.locator('#close-detail').click();
 for(const [level,expected] of [[9,'Hidden'],[30,'HP'],[80,'Màu 2:'],[140,'Chứa: #'],[351,'Pilot']]){
  await p.goto(url+'?level='+level);await p.locator('.level-open:visible').click();await p.waitForSelector('#special-shooters');assert((await p.locator('#special-shooters').innerText()).includes(expected),'Level '+level+' fields');
 }
 await p.goto(url+'?level=1');await p.locator('.level-open:visible').click();await p.waitForSelector('#special-shooters');assert((await p.locator('#special-shooters').innerText()).includes('Không thấy'),'Ordinary level empty state');
 await p.goto(url+'?shooter=flag:hidden');assert((await table.locator('.result-count').innerText()).startsWith('145 /'),'Feature deep link');assert(await p.evaluate(()=>document.documentElement.scrollWidth<=innerWidth),'Feature filters mobile overflow');await p.screenshot({path:path.join(base,'Data/shooter-specials-filter-mobile.png'),fullPage:true});
 await p.locator('.special-glossary>summary').click();assert((await p.locator('.special-glossary').innerText()).includes('Chỉ thấy trong code'),'Code-only types qualified');
 assert(!errors.length,'Browser errors '+errors.join(';'));await browser.close();
 fs.writeFileSync(path.join(base,'Data/shooter_specials_qa.json'),JSON.stringify({passed:true,checks:['12 type/status filter counts and first levels','combined level and type filter','Key/Lock record IDs','ice HP and second color','generator inner shooter IDs','pilot and hidden details','ordinary level empty state','feature deep link','code-only types qualified','mobile detail and filter layout','no browser JS errors']},null,2));console.log('PASS: special shooter types, attributes, filters, exact counts and mobile layout');
})().catch(e=>{console.error(e);process.exit(1)});
