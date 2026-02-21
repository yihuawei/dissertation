# N(v) means the neighbor vertices of v.
# E is a list of all the edges in data graph.
# for(e in E){
#   v0 = e0.start
#   v1 = e0.end
#   C2 = N(v0) intersect N(v1)
#   u  = N(v0).size - C2.size -1;
#   v  = N(v1).size - C2.size -1;
#   count += (C2.size * (u + v));
# }
def Decomine(edges):
  G = mk_graph(edges)
  def f1(e):
    Nv0 = neighbor(G, get(e, 0))
    Nv1 = neighbor(G, get(e, 1))
    C2 = intersect(Nv0, Nv1)
    tri = size(C2)
    u = size(Nv0) - tri -1
    v = size(Nv1) - tri -1
    return tri * (u + v);
  return sum(apply(func=f1, cond=None, edges))


  