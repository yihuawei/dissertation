//iterate over edges in $\color{pakistangreen}\Delta E$ that 
//match $\color{pakistangreen}(u_0, u_2)$
for ($(x_0, x_2) \in \Delta E$) {
  //$\color{pakistangreen}\Delta R_2$ joins with $\color{pakistangreen}R_1$ and $\color{pakistangreen}R'_3$
  for ($x_1 \in N(x_0)\cap N'(x_2)$) {
  //and with updated $\color{pakistangreen}R_4'$ and $\color{pakistangreen}R_5'$
    for ($x_3 \in N'(x_1)\cap N'(x_2)$) {
      output($x_0, x_1, x_2, x_3$); } } }