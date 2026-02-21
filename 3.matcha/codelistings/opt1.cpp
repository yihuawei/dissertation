int RapidMatch(..., int L03[][2]) {
 @\hlmyblue{auto G03\_nbr = new int[len3];}@
 @\hlmyblue{auto G03\_indPtr = new int[H][3];}@
 @\hlmyorange{int nb\_h, nb\_p0, nb\_p1;}@
 @\hlmygreen{auto lst = new int[2];}@ @\hlmypurple{int df\_pos;}@
 auto apl0_out = new int[_max_degree(L01)];
 @\hlmyyellow{int sum1;}@ 
 ...
 @\hlmyblue{\_init\_graph(L03, len3, G03\_nbr, G03\_indPtr);}@
 for (int i0 = 0; i0 < len1; i0++) {
    ... 
    @\hlmyorange{nb\_h = \_hash(L01[i0][0]);}@
    @\hlmyorange{nb\_p0 = G03\_indPtr[nb\_h][1];}@
    @\hlmyorange{nb\_p1 = G03\_indPtr[nb\_h][2];}@
    @\hlmygreen{lst[1] = L01[i0][1];}@ //v1
    @\hlmyyellow{sum1 = 0;}@
    @\hlmyyellow{for (int i2 = 0; i2 < C2\_size; i2++) \{ }@
        @\hlmygreen{lst[0] = C2[i2];}@     //v2
        @\hlmypurple{\_diff(df\_pos, G03\_nbr,nb\_p0, nb\_p1, lst);}@
        @\hlmyyellow{sum1 = sum1 + df\_pos;}@
    @\hlmyyellow{\}}@
    apl0_out[i0] = sum1;
  } //i0 for loop
} //function
