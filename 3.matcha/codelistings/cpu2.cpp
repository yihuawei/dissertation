int RapidMatch(..., int L03[][2]) {
 ...
 @\hlmyyellow{int sum1;}@ 
 ...
 //_init_graph is moved out of i0 loop after code motion.
 @\hlmyblue{\_init\_graph(L03, len3, G03\_nbr, G03\_indPtr);}@
 for (int i0 = 0; i0 < len1; i0++) {
    ... 
    //The four statements are moved out of i1 loop after code motion.
    @\hlmyorange{nb\_h = \_hash(L01[i0][0]);}@
    @\hlmyorange{nb\_p0 = G03\_indPtr[nb\_h][1];}@
    @\hlmyorange{nb\_p1 = G03\_indPtr[nb\_h][2];}@
    @\hlmygreen{lst[1] = L01[i0][1];}@ 
    @\hlmyyellow{sum1 = 0;}@
    //i1 loop is fused into i2 loop.
    @\hlmyyellow{for (int i2 = 0; i2 < C2\_size; i2++) \{ }@
        @\hlmygreen{lst[0] = C2[i2];}@    
        @\hlmypurple{\_diff(df\_out, df\_pos, G03\_nbr, }@
        @\hlmypurple{nb\_p0, nb\_p1, lst);}@
        @\hlmyyellow{sum1 = sum1 + df\_pos; \} }@
    apl0_out[i0] = sum1; } } 