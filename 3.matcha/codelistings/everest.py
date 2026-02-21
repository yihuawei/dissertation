# NE(v) means the neighbor edge
# of vertex v.
# delta is the time constraint
# for(e0 in E){
#   v0 = e0.start
#   v1 = e0.end
#   bound = e0.t+delta

#   for(e1 in NE(v1)){
#     v2 = e1.end
#     if(e1.t<e0.t  or 
#        e1.t>bound or
#        v2==v0) continue    

#     for(e2 in NE(v2)){
#       v3 = e2.end
#       if(e2.t<e1.t  or 
#          e2.t>bound or
#          v3==v0     or
#          v3==v1) continue     
#       count++;
#     }}}
def Everest(edges, einfo)
  G = mk_graph(edges, None, einfo)
  def f1(e0, t0):
    v0 = get(e, 0)
    v1 = get(e, 1)
    time_bound = t0 + 86400
    C2 = neighbor(G, v1)
    C2_info = edge_info(G, v1)

    def f2_cond(v2, t2):
      return v2!=v0 && t2>t1 && t2<time_bound
    def f2(v2, t2):
      C3 = neighbor(G, v2)
      C3_info = neighbor(G, v2)

      def f3_cond(v3, t3):
        return v3!=v0 &&
               v3!=v1 &&
               t3>t2 && 
               t3<time_bound
      def f3(v3, t3): 
         return v3
      return size(apply(func=f3, cond=f3_cond, 
                        C3, C3_info))
    return sum(apply(func=f2, cond=f2_cond, 
                     C2, C2_info))
  return sum(apply(func=f1, cond=None, 
                   edges, G.eInfo))