/* Evidence-based shooter link diagrams, shared group labels and highlighting. */
window.renderShooterLinks=function(l){
 const graph=l.links;if(!graph)return '';
 const esc=x=>String(x??'').replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
 function card(g,type){
  const chain=type==='chained',n=g.members.length,h=Math.max(180,Math.min(300,n*25)),cx=150,cy=h/2,rx=108,ry=h/2-35;
  const coords=new Map(g.members.map((m,i)=>{const a=-Math.PI/2+2*Math.PI*i/n;return[m.rid,{x:cx+rx*Math.cos(a),y:cy+ry*Math.sin(a)}]}));
  const lines=g.edges.map(([a,b])=>{const p=coords.get(a),q=coords.get(b);return `<line x1="${p.x}" y1="${p.y}" x2="${q.x}" y2="${q.y}" class="link-edge ${chain?'chain-edge':'group-edge'}"/>`}).join('');
  const nodes=g.members.map(m=>{const p=coords.get(m.rid);return `<g><title>Shooter #${m.id}: ${esc(window.CUBE_COLORS[m.color])}, ${m.bullets} đạn</title><circle cx="${p.x}" cy="${p.y}" r="16" fill="${window.CUBE_PALETTE[m.color]||'#999'}" stroke="#354b54"/><text x="${p.x}" y="${p.y+4}" text-anchor="middle" class="link-node-label">${m.id}</text></g>`}).join('');
  return `<article class="link-group ${chain?'chain-group':'connected-group'}" data-link-card="${g.key}"><h4>${chain?'Nối xích':'Nối nhóm'} ${g.key} · ${n} shooter</h4><svg viewBox="0 0 300 ${h}" role="img" aria-label="${chain?'Nhóm xích':'Nhóm nối'} ${g.key}, shooter ID ${g.members.map(m=>m.id).join(', ')}">${lines}${nodes}</svg><p>${chain?'Bị khóa khi còn xích. Tháo khi cả nhóm đạt Row = 0.':`Cần ${n} dock cho riêng nhóm nối này; vẫn phải đủ điều kiện đặt.`}</p><ul>${g.members.map(m=>`<li><b>#${m.id}</b> · ${esc(window.CUBE_COLORS[m.color])} · ${m.bullets} đạn · ${m.positions.map(p=>`cột ${p.column}, vị trí ${p.position}`).join('; ')||'nằm trong reference lồng'}</li>`).join('')}</ul><button type="button" class="highlight-link" data-link-key="${g.key}">Tô sáng ${g.key} trong hàng shooter</button></article>`;
 }
 return `<section id="shooter-connections"><h3>Liên kết giữa shooter</h3><div class="link-legend"><span class="link-badge connected-badge">N — Nối nhóm</span> đi cùng nhóm, cần đủ dock <span class="link-badge chain-badge">X — Nối xích</span> khóa tạm thời, tháo khi cả nhóm về Row 0</div><p>Mỗi nút là một shooter; số trong nút là <b>BlasterData.id</b>, màu lấy từ dữ liệu shooter. Nét liền là nối nhóm; nét đứt là nối xích. Vị trí nút trên sơ đồ chỉ để dễ đọc, không mô phỏng vị trí trong game.</p><p><a href="../Items/Items.html#shooter-links">Đọc so sánh logic hai loại nối</a> · <button type="button" id="clear-link-highlight">Bỏ tô sáng</button></p>${graph.connected.length||graph.chained.length?`<div class="link-grid">${graph.connected.map(g=>card(g,'connected')).join('')}${graph.chained.map(g=>card(g,'chained')).join('')}</div>`:'<p>Không có quan hệ ConnectedBlasters hoặc ChainedBlasters trong bản ghi level này.</p>'}${graph.unresolved.length?'<p class="note">Có reference chưa giải được; sơ đồ chưa đầy đủ.</p>':''}<p class="evidence">Đường hai chiều trong data được gộp thành một cạnh. Nhãn N/X là nhãn tra cứu của báo cáo. Row 0 là hàng runtime; vị trí serialized trong bảng không tự xác nhận trạng thái đã tháo xích.</p></section>`;
};
window.shooterLinkBadges=function(l,b){
 if(!l.links)return '';const rid=String(b.rid),parts=[];
 for(const [kind,groups] of [['connected',l.links.connected],['chained',l.links.chained]])for(const g of groups)if(g.members.some(m=>m.rid===rid))parts.push(`<span class="link-badge ${kind==='connected'?'connected-badge':'chain-badge'}">${g.key} · ${kind==='connected'?'đi nhóm':'khóa xích'}</span>`);
 return parts.join(' ');
};
window.bindShooterLinkHighlights=function(l,root){
 const clear=()=>root.querySelectorAll('.link-dim,.link-selected').forEach(x=>x.classList.remove('link-dim','link-selected'));
 root.querySelector('#clear-link-highlight')?.addEventListener('click',clear);
 root.querySelectorAll('.highlight-link').forEach(button=>button.addEventListener('click',()=>{
  clear();const key=button.dataset.linkKey,g=[...l.links.connected,...l.links.chained].find(g=>g.key===key),members=new Set(g.members.map(m=>m.rid));
  root.querySelectorAll('.shooter[data-rid]').forEach(node=>node.classList.add(members.has(node.dataset.rid)?'link-selected':'link-dim'));
  root.querySelectorAll('[data-link-card]').forEach(node=>node.classList.add(node.dataset.linkCard===key?'link-selected':'link-dim'));
 }));
};
