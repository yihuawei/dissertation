//iterate over edges in $\color{pakistangreen}\Delta E$ that 
//match $\color{pakistangreen}(u_0, u_1)$
for ($(x_0, x_1) \in \Delta E$) {
  //$\color{pakistangreen}\Delta R_1$ joins with updated $\color{pakistangreen}R_2',R_3'$
  for ($x_2 \in N'(x_0)\cap N'(x_1)$) {
  //and with updated $\color{pakistangreen}R_4',R_5'$
    for ($x_3 \in N'(x_1)\cap N'(x_2)$) {
      output($x_0, x_1, x_2, x_3$); } } }