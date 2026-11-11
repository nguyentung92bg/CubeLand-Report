document.addEventListener('DOMContentLoaded',()=>{
// Offline table search, pagination and exact packaged-level lookup.
document.querySelectorAll('.data-table').forEach(section=>{
 const input=section.querySelector('.search');if(!input)return;
 const rows=[...section.querySelectorAll('tbody tr')],count=section.querySelector('.result-count'),label=section.querySelector('.page-count'),prev=section.querySelector('.prev'),next=section.querySelector('.next');
 const normalize=text=>text.normalize('NFD').replace(/[\u0300-\u036f]/g,'').replace(/đ/g,'d').replace(/Đ/g,'D').toLowerCase();
 const values=rows.map(row=>normalize(row.textContent));let page=0,matches=rows;
 const number=section.querySelector('#level-number'),base=section.querySelector('#level-index-base'),feature=section.querySelector('#shooter-feature'),levelByRow=new Map();
 if(number)rows.forEach(row=>{const id=row.querySelector('[data-level]')?.dataset.level;const level=window.CUBE_LEVELS.find(l=>l.id===id);if(level){levelByRow.set(row,level);row.dataset.levelIndex=level.levelIndex;row.dataset.levelNumber=level.levelNumber;}});
 function draw(){const pages=Math.max(1,Math.ceil(matches.length/50));page=Math.max(0,Math.min(page,pages-1));rows.forEach(row=>row.hidden=true);matches.slice(page*50,(page+1)*50).forEach(row=>row.hidden=false);count.textContent=`${matches.length} / ${rows.length} bản ghi`;label.textContent=`Trang ${page+1} / ${pages}`;prev.disabled=page===0;next.disabled=page>=pages-1;}
 function filter(){const query=normalize(input.value.trim()),raw=number?.value??'',index=raw===''?null:Number(raw)-(base.value==='1'?1:0);matches=rows.filter((row,i)=>values[i].includes(query)&&(index===null||(Number.isInteger(index)&&index>=0&&index<850&&Number(row.dataset.levelIndex)===index))&&(!feature?.value||levelByRow.get(row)?.specialShooters.features.includes(feature.value)));page=0;draw();}
 input.addEventListener('input',filter);prev.addEventListener('click',()=>{page--;draw()});next.addEventListener('click',()=>{page++;draw()});
 if(number){
  number.addEventListener('input',filter);base.addEventListener('change',()=>{number.min=base.value==='1'?'1':'0';number.max=base.value==='1'?'850':'849';filter()});
  feature?.addEventListener('change',filter);
  section.querySelector('#clear-level-filters').addEventListener('click',()=>{input.value='';number.value='';if(feature)feature.value='';filter()});
  const params=new URLSearchParams(location.search);if(params.has('level'))number.value=params.get('level');else if(params.has('index')){base.value='0';number.min='0';number.max='849';number.value=params.get('index');}if(feature&&params.has('shooter'))feature.value=params.get('shooter');
 }
 filter();
});

});
