# N(v) means the neighbor vertices of v.
# E is a list of all the edges in data graph.
# for(e in E){
#   v0 = e[0]
#   v1 = e[1]
#   C2 = N(v0) $\cap$ N(v1)
#   for(v2 in C2){
#     C3 = N(v2) - {v0, v1}
#     count+=size(C3)
#   }
# }
def G2Miner(edges)
  G = mk_graph(edges)
  def f1(e):
    v0 = get(e, 0)
    v1 = get(e, 1)
    Nv0 = neighbor(G, v0)
    Nv1 = neighbor(G, v1)
    C2 = intersect(Nv0, Nv1)
    def f2(v2):
      Nv2 = neighbor(G, v2)
      C3 = diff(Nv2, mk_list(val=[v0, v1])) 
      return size(C3))
    return sum(apply(func=f2, None, C2))
  return sum(apply(func=f1, None, edges))
