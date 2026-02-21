for($v_0$ in $V$){
 for($v_1$ in $N(v_0)$){
  for($v_2$ in $N(v_0)$ $\cap$ $N(v_1)$){
   for($v_3$ in $N(v_0)$ - {$v_1$, $v_2$}){
    output({$v_0$, $v_1$, $v_2$, $v_3$});}}}}