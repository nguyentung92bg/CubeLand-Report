/* Offline level browser. Script chunks work with file:// without fetch. */
(()=>{
 const dialog=document.getElementById('level-dialog'),body=document.getElementById('detail-body'),title=document.getElementById('detail-title');
 const e=x=>String(x??'').replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
 const palette=window.CUBE_PALETTE,colors=window.CUBE_COLORS,types=window.CUBE_BLASTER_TYPES;
 const loading=new Map();let request=0;
 function load(bundle){if(window.CUBE_LEVEL_BUNDLES[bundle])return Promise.resolve();if(loading.has(bundle))return loading.get(bundle);const p=new Promise((resolve,reject)=>{const s=document.createElement('script');s.src='../Data/Levels/bundle-'+bundle+'.js';s.onload=resolve;s.onerror=()=>reject(new Error('Không đọc được dữ liệu bundle '+bundle));document.head.append(s)});loading.set(bundle,p);return p;}
 document.getElementById('close-detail').onclick=()=>{request++;dialog.close()};
 document.querySelectorAll('.level-open').forEach(button=>button.addEventListener('click',async()=>{
  const id=button.dataset.level,bundle=button.dataset.bundle,ticket=++request;title.textContent=id;body.textContent='Đang đọc dữ liệu level…';dialog.showModal();
  try{await load(bundle);if(ticket!==request)return;const level=window.CUBE_LEVEL_BUNDLES[bundle].find(l=>l.id===id);if(!level)throw Error('Không tìm thấy bản ghi');render(level);}catch(err){body.textContent=err.message;}
 }));
 function render(l){
  title.textContent='Level '+l.levelNumber+' · '+l.name+' · Index '+l.levelIndex;
  const cs={};for(const layer of l.geometry)cs[layer.color]=(cs[layer.color]||0)+layer.positions.length;
  const flags=b=>[b.isHidden?'Hidden':'',b.iceHp?'Ice HP '+b.iceHp:'',b.secondaryColor?'Màu 2: '+(colors[b.secondaryColor]||b.secondaryColor):'',b.isPilot?'Pilot':'',b.isChained?'Cờ isChained trong asset: bật':'',b.hasTrap?'Trap '+(b.isTrapOpen?'open':'closed'):'',b.hasColorBarrel?'Barrel HP '+b.colorBarrelHp:'',b.InnerBlasters?.length?'Inner ×'+b.InnerBlasters.length:''].filter(Boolean).join(' · ');
  body.innerHTML=`<div class="level-layout"><div><canvas id="voxel-view" width="800" height="700" aria-label="Hình chiếu voxel thường từ LayerData"></canvas><div class="level-controls"><label>Góc xoay <input id="yaw" type="range" min="0" max="360" value="35"></label><label>Chiều sâu <select id="depth"><option value="all">Tất cả</option>${[...new Set(l.geometry.map(g=>g.depth))].sort((a,b)=>a-b).map(d=>`<option value="${d}">${d}</option>`).join('')}</select></label><button id="reset-view">Đặt lại</button></div><p class="evidence">Hình chiếu minh họa từ voxel thường; không dựng vật thể đặc biệt, collider, đạn hoặc ánh sáng của game.</p></div><div><img src="../${e(l.image)}" alt="Ảnh asset ${e(l.name)}" width="140" height="140"><p><b>Level ${l.levelNumber}</b> · Index ${l.levelIndex} · ${e(l.id)}</p><p><b>${e(l.difficultyName)}</b> · ${l.dockCount} dock · ${l.columns} cột shooter</p><p>${l.voxels.toLocaleString('vi')} vị trí voxel thường · ${l.colors} màu · ${l.shooters} managed BlasterData · ${l.bullets.toLocaleString('vi')} đạn cộng dồn</p><p>Loop: ${l.loop?'bật':'tắt'} · Meteor offer: ${l.meteor?'bật':'tắt'}</p><p>Hash: <code>${e(l.hash)}</code></p><p><a href="../${e(l.file)}">JSON nguồn đầy đủ</a></p><h3>Vị trí voxel theo màu</h3>${Object.entries(cs).map(([c,count])=>`<div><span class="color-dot" style="background:${palette[c]||'#888'}"></span>${e(colors[c]||c)}: ${count}</div>`).join('')}</div></div>${window.renderSpecialShooters(l)}${window.renderShooterLinks(l)}<h3>Hàng shooter theo thứ tự serialized</h3><p class="evidence">Thứ tự hiển thị giữ thứ tự phần tử trong asset; chưa khẳng định đầu hàng trên UI. Shooter liên kết/inner nằm trong RefIds và có thể được tham chiếu từ nhiều vị trí.</p><div class="queue-columns">${l.queues.map((q,i)=>`<div class="queue-col"><b>Cột ${i+1}</b>${q.map((b,j)=>`<div class="shooter" data-rid="${e(b.rid)}" style="--color:${palette[b.color]||'#777'}"><b>#${b.id??'?'} · ${j+1}. ${e(colors[b.color]||'Chưa resolve')}</b><br>${e(types[b.Type]||b.Type||'')} · ${b.bulletCount??'?'} đạn<br><small>${e(flags(b))}</small><br>${window.shooterLinkBadges(l,b)}</div>`).join('')}</div>`).join('')}</div><h3>Dữ liệu cơ chế đặc biệt</h3><p>${Object.entries(l.special).filter(([,n])=>n).map(([k,n])=>e(k)+': '+n).join(' · ')||'Không có entry trong các mảng cơ chế đã thống kê.'}</p><h3>SolutionColumns</h3><p>${l.solutionColumns?.length?e(JSON.stringify(l.solutionColumns)):'Mảng trống; không dựng lời giải giả định.'}</p>`;
  window.bindShooterLinkHighlights(l,body);
  const canvas=document.getElementById('voxel-view'),ctx=canvas.getContext('2d'),yaw=document.getElementById('yaw'),depth=document.getElementById('depth');
  function draw(){
   const angle=+yaw.value*Math.PI/180,ca=Math.cos(angle),sa=Math.sin(angle),points=[];
   for(const layer of l.geometry){if(depth.value!=='all'&&+depth.value!==layer.depth)continue;for(const [x,y,z] of layer.positions){const rx=x*ca-z*sa,rz=x*sa+z*ca;points.push({x:rx,y:-y*.85+rz*.38,z:rz-y*.3,c:layer.color});}}
   ctx.clearRect(0,0,800,700);if(!points.length){ctx.fillText('Không có voxel ở lớp này',30,50);return;}
   let minX=Infinity,maxX=-Infinity,minY=Infinity,maxY=-Infinity;for(const p of points){minX=Math.min(minX,p.x);maxX=Math.max(maxX,p.x);minY=Math.min(minY,p.y);maxY=Math.max(maxY,p.y)}
   const scale=Math.min(700/(maxX-minX+3),590/(maxY-minY+3)),cx=(minX+maxX)/2,cy=(minY+maxY)/2;
   points.sort((a,b)=>a.z-b.z);for(const p of points){const x=400+(p.x-cx)*scale,y=350+(p.y-cy)*scale,s=scale*.9;ctx.fillStyle=palette[p.c]||'#888';ctx.fillRect(x-s/2,y-s/2,s,s);ctx.strokeStyle='#00000020';ctx.strokeRect(x-s/2,y-s/2,s,s)}
  }
  yaw.oninput=draw;depth.onchange=draw;document.getElementById('reset-view').onclick=()=>{yaw.value=35;depth.value='all';draw()};draw();
 }
})();
