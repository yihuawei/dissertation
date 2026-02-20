//iterate over edges in $\color{pakistangreen}\Delta E$ that 
//match $\color{pakistangreen}(u_1, u_3)$
for ($(x_1, x_3) \in \Delta E$) {
  //$\color{pakistangreen}\Delta R_4$ joins with $\color{pakistangreen}R_1$
  for ($x_0 \in N(x_1)$) {
  //and with $\color{pakistangreen}R_2, R_3$, and updated $\color{pakistangreen}R_5'$
    for ($x_2 \in N(x_0)\cap N(x_1)\cap N'(x_3)$) {
      output($x_0, x_1, x_2, x_3$); } } }