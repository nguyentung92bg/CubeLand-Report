// Resolve serialized shooter references; reverse declarations share one visual edge.
module.exports=function shooterLinks(blasters,queues){
 const byRid=new Map(blasters.map(b=>[String(b.rid),b])),positions=new Map();
 queues.forEach((q,c)=>q.forEach((b,r)=>{const rid=String(b.rid);if(!positions.has(rid))positions.set(rid,[]);positions.get(rid).push({column:c+1,position:r+1});}));
 const unresolved=[];
 function graph(field,prefix){
  const unique=new Map();
  for(const b of blasters)for(const target of b[field]||[]){
   const from=String(b.rid),to=String(target.rid);if(!byRid.has(to)){unresolved.push({field,from,to});continue;}if(from===to)continue;
   const pair=[from,to].sort();unique.set(pair.join(':'),pair);
  }
  const edges=[...unique.values()],adj=new Map();
  for(const [a,b] of edges){if(!adj.has(a))adj.set(a,new Set());if(!adj.has(b))adj.set(b,new Set());adj.get(a).add(b);adj.get(b).add(a);}
  const visited=new Set(),groups=[];
  for(const rid of adj.keys()){
   if(visited.has(rid))continue;const todo=[rid],members=[];
   while(todo.length){const r=todo.pop();if(visited.has(r))continue;visited.add(r);members.push(r);todo.push(...adj.get(r));}
   const ids=new Set(members);groups.push({key:prefix+(groups.length+1),members:members.map(r=>{const b=byRid.get(r);return{rid:r,id:b.id,color:b.color,bullets:b.bulletCount,positions:positions.get(r)||[]};}),edges:edges.filter(([a,b])=>ids.has(a)&&ids.has(b))});
  }
  return groups;
 }
 return{connected:graph('ConnectedBlasters','N'),chained:graph('ChainedBlasters','X'),unresolved};
};
