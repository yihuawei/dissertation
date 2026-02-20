//iterate over edges in $\color{pakistangreen}\Delta E$ that 
//match $\color{pakistangreen}(u_2, u_3)$
for ($(x_2, x_3) \in \Delta E$) {
  //$\color{pakistangreen}\Delta R_5$ joins with $\color{pakistangreen}R_2$
  for ($x_0 \in N(x_2)$) {
  //and with $\color{pakistangreen}R_1, R_3, R_4$
    for ($x_1 \in N(x_0)\cap N(x_2)\cap N(x_3)$) {
      output($x_0, x_1, x_2, x_3$); } } }