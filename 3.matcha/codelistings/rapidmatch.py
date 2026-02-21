def RapidMatch(L01, L02, L03, L12):
  G02 = @\textbf{mk\_graph}@(edges = L02)
  G03 = @\textbf{mk\_graph}@(edges = L03)
  G12 = @\textbf{mk\_graph}@(edges = L12)
  def f1(e):
    S0 = @\textbf{neighbor}@(G02, @\textbf{get}@(e, 0))
    S1 = @\textbf{neighbor}@(G12, @\textbf{get}@(e, 1))
    C2 = @\textbf{intersect}@(S0, S1)
    def f2(v2):
      C3 = @\textbf{diff}@(@\textbf{neighbor}@(G03, @\textbf{get}@(e, 0)), @\textbf{mk\_list}@(val=[@\textbf{get}@(e, 1), v2])))
      return @\textbf{size}@(C3)
    return @\textbf{sum}@(@\textbf{apply}@(func=f2, cond=None, C2))
  return @\textbf{sum}@(@\textbf{apply}@(func=f1, cond=None, L01))