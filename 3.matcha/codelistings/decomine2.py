def Decomine(edges):
  G = @\textbf{mk\_graph}@(edges)
  
  # select vertices of a certain label from S
  def select(S, label)
    return @\textbf{apply}@(lambda v: v, cond=lambda v: @\textbf{vertex\_label}@(G, v) == label, S)
  def f(e):
    S0 = @\textbf{neighbor}@(G, @\textbf{get}@(e, 0))
    S1 = @\textbf{neighbor}@(G, @\textbf{get}@(e, 1))
    C2 = select(@\textbf{intersect}@(S0, S1), @'a'@)
    S3 = select(S0, @'d'@)
    return @\textbf{size}@(C2) * @\textbf{size}@(S3)
    
  # iterate over edges that match (u0, u1)
  return @\textbf{sum}@(@\textbf{apply}@(func=f, cond=lambda e: @\textbf{vertex\_label}@(G, get(e, 0)) == @'a'@ and @\textbf{vertex\_label}@(G, get(e, 1)) == @'c'@, edges))