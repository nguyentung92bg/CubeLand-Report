(function(root,factory){const api=factory();if(typeof module==='object'&&module.exports)module.exports=api;else root.CubeShooterSpecials=api;})(typeof window!=='undefined'?window:globalThis,function(){
 const types={
  0:{name:'Normal',info:'Shooter thường; vẫn có thể mang thuộc tính bổ sung.'},
  1:{name:'Key',info:'Chìa khóa; controller có xử lý Unlock nhắm tới LockController.'},
  2:{name:'Lock',info:'Shooter khóa; có trạng thái đang mở khóa riêng.'},
  3:{name:'Scissors',info:'Kéo; có thao tác Cut đối với GiftWrapperController.'},
  4:{name:'Generator',info:'Chứa shooter trong InnerBlasters; có xử lý lần lượt đưa shooter tiếp theo ra.'},
  5:{name:'Hammer',info:'Búa; có thao tác đánh vào WallController.'},
  6:{name:'Sword',info:'Có trong enum/code và xử lý đánh Shield; chưa thấy Type này trong 850 level.'},
  7:{name:'Propeller',info:'Có thao tác đánh vào VoxelController riêng.'},
  8:{name:'Stop Sign',info:'Có trạng thái và thông số health riêng trong controller.'},
  9:{name:'Machete',info:'Có controller và thao tác Hit; xuất hiện đầu tiên trong asset IvyLockBox. Chưa khẳng định đầy đủ rule tương tác.'}
 };
 const flags={
  hidden:{name:'Hidden — ẩn',test:b=>!!b.isHidden,info:'Che thông tin shooter; có xử lý reveal.'},
  iced:{name:'Iced — băng',test:b=>b.iceHp>0,info:'Có iceHp; điều kiện đặt kiểm tra độ bền băng còn lại.'},
  doubleColor:{name:'Double Color — hai màu',test:b=>Number(b.secondaryColor)!==0,info:'Lưu màu chính và secondaryColor; chưa mô phỏng cơ chế chuyển màu.'},
  pilot:{name:'Pilot',test:b=>!!b.isPilot,info:'Dùng PilotBlasterController, có luồng đặt và xoay riêng.'},
  inner:{name:'Chứa shooter',test:b=>!!b.InnerBlasters?.length,info:'Danh sách InnerBlasters trỏ tới shooter lồng qua RefIds; không phải cạnh nối nhóm/xích.'},
  trap:{name:'Trap',test:b=>!!b.hasTrap,info:'Có hasTrap/isTrapOpen trong code; chưa thấy bật trong 850 level.'},
  colorBarrel:{name:'Color Barrel',test:b=>!!b.hasColorBarrel,info:'Có độ bền và màu riêng trong code; chưa thấy bật trong 850 level.'}
 };
 function summarize(blasters){
  const typeCounts={},flagCounts={};for(const b of blasters){typeCounts[b.Type]=(typeCounts[b.Type]||0)+1;for(const [k,f] of Object.entries(flags))if(f.test(b))flagCounts[k]=(flagCounts[k]||0)+1;}
  return{typeCounts,flagCounts,specialCount:blasters.filter(b=>b.Type!==0||Object.values(flags).some(f=>f.test(b))).length,features:[...Object.keys(typeCounts).filter(k=>k!=='0').map(k=>'type:'+k),...Object.keys(flagCounts).map(k=>'flag:'+k)]};
 }
 return{types,flags,summarize};
});
if(typeof window!=='undefined'){
 window.renderSpecialShooters=function(l){
  const api=window.CubeShooterSpecials,s=l.specialShooters,e=x=>String(x??'').replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
  const byRid=new Map(l.blasters.map(b=>[String(b.rid),b])),pos=new Map();l.queues.forEach((q,c)=>q.forEach((b,r)=>pos.set(String(b.rid),`Cột ${c+1}, vị trí ${r+1}`)));
  const attributes=b=>{
   const a=[];if(b.isHidden)a.push('Hidden');if(b.iceHp>0)a.push('Iced · HP '+b.iceHp);if(b.secondaryColor)a.push('Màu 2: '+(window.CUBE_COLORS[b.secondaryColor]||b.secondaryColor));if(b.isPilot)a.push('Pilot');if(b.hasTrap)a.push('Trap: '+(b.isTrapOpen?'mở':'đóng'));if(b.hasColorBarrel)a.push('Color Barrel · HP '+b.colorBarrelHp);
   if(b.InnerBlasters?.length)a.push('Chứa: '+b.InnerBlasters.map(r=>{const t=byRid.get(String(r.rid));return t?'#'+t.id:'rid '+r.rid}).join(', '));return a.join(' · ')||'—';
  };
  const bs=l.blasters.filter(b=>b.Type!==0||Object.values(api.flags).some(f=>f.test(b)));
  const cards=[...Object.entries(s.typeCounts).filter(([k])=>k!=='0').map(([k,n])=>[api.types[k]?.name||k,n,api.types[k]?.info]),...Object.entries(s.flagCounts).map(([k,n])=>[api.flags[k].name,n,api.flags[k].info])];
  return `<section id="special-shooters"><h3>Loại shooter & trạng thái đặc biệt</h3><p><b>${s.specialCount}</b> bản ghi shooter có loại hoặc thuộc tính đặc biệt. Một shooter có thể vừa mang loại riêng, vừa bị băng/ẩn/nối; số lượng giữa các nhóm có thể chồng nhau.</p>${cards.length?`<div class="special-grid">${cards.map(([name,n,info])=>`<article class="special-card"><b>${e(name)} <span>×${n}</span></b><p>${e(info)}</p></article>`).join('')}</div><div class="scroll"><table class="special-shooter-table"><thead><tr><th>ID shooter</th><th>Loại</th><th>Thuộc tính trong asset</th><th>Vị trí serialized</th></tr></thead><tbody>${bs.map(b=>`<tr><td>#${b.id}</td><td>${e(api.types[b.Type]?.name||b.Type)}</td><td>${e(attributes(b))}</td><td>${e(pos.get(String(b.rid))||'Reference lồng / ngoài cột trực tiếp')}</td></tr>`).join('')}</tbody></table></div>`:'<p>Không thấy loại hoặc thuộc tính đặc biệt trong các BlasterData của level này.</p>'}<p class="evidence">Đếm mỗi RefId một lần, gồm cả shooter lồng. Đây là cấu hình đóng gói; mô tả hành vi dựa trên metadata/pseudo-C, chưa kiểm chứng gameplay. Liên kết N/X được trình bày riêng bên dưới.</p></section>`;
 };
}
