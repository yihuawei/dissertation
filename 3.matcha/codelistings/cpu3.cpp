int RapidMatch(..., int L03[][2], int len3, ...) {
 // Memory Pre-allocation
 @\hlmyblue{auto G03\_nbr = new int[len3];}@
 @\hlmyblue{auto G03\_indPtr = new int[H][3];}@
 @\hlmyorange{int nb\_h, nb\_p0, nb\_p1;}@
 @\hlmygreen{auto lst = new int[2];}@
 @\hlmypurple{int df\_pos;}@
 @\hlmypurple{auto df\_out = new int[\_max\_degree(L03)];}@
 @\hlmygrey{auto apl1\_out = new int[\_max\_degree(L01)];}@
 @\hlmyyellow{int sum1;}@ 
 ... 
 for (int i0 = 0; i0 < len1; i0++) {
  ... 
  @\hlmygrey{for (int i1 = 0; i1 < C2\_size; i1++) \{ }@
   @\hlmyblue{\_init\_graph(L03, len3, G03\_nbr, }@
               @\hlmyblue{G03\_indPtr);}@
   @\hlmyorange{nb\_h = \_hash(L01[i0][0]);}@
   @\hlmyorange{nb\_p0 = G03\_indPtr[nb\_h][1];}@
   @\hlmyorange{nb\_p1 = G03\_indPtr[nb\_h][2];}@ 
   @\hlmygreen{lst[0] = C2[i1];}@
   @\hlmygreen{lst[1] = L01[i0][1];}@
   @\hlmypurple{\_diff(df\_out, df\_pos, G03\_nbr, }@
         @\hlmypurple{nb\_p0, nb\_p1, lst);}@
   @\hlmygrey{apl1\_out[i1] = df\_pos; \}}@
  @\hlmyyellow{sum1 = 0;}@
  @\hlmyyellow{for (int i2 = 0; i2 < C2\_size; i2++) \{}@
   @\hlmyyellow{sum1 = sum1 + apl1\_out[i2];\} }@}...}