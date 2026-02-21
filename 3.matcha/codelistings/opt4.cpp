int RapidMatch(..., int L03[][2], int len3, ...) {
 @\hlmyblue{auto G03\_nbr = new int[len3];}@
 @\hlmyblue{auto G03\_indPtr = new int[H][3];}@
 @\hlmygrey{auto apl0\_out = new int[nthread][\_max\_degree(L01)];}@
 @\hlmyyellow{int sum1[num\_thread];}@ 
 //init sum1 to 0
 ... 
 @\hlmyblue{\_init\_graph(L03, len3, G03\_nbr, G03\_indPtr);}@
 #pragma omp parallel ;
 for (int i0 = 0; i0 < len1; i0++) {
    int tid = omp\_get\_thread\_num();
    @\hlmygreen{int lst[2];}@
    ... 
    @\hlmyorange{int nb\_h = \_hash(L01[i0][0]);}@
    @\hlmyorange{int nb\_p0 = G03\_indPtr[nb\_h][1];}@
    @\hlmyorange{int nb\_p1 = G03\_indPtr[nb\_h][2];}@ 
    @\hlmygreen{lst[0] = L01[i0][1];}@
    @\hlmygrey{for (int i1 = 0; i1 < C2\_size; i1++) \{ }@
        @\hlmygreen{lst[1] = C2[i1];}@
        @\hlmypurple{int df\_pos;}@
        @\hlmypurple{\_diff(df\_pos, G03\_nbr, nb\_p0, nb\_p1, lst);}@
        @\hlmygrey{sum1[tid] = sum1[tid] + df\_pos;}@
    @\hlmygrey{\}}@
    apl0_out[tid][i0] = sum1[tid];
  } //i0 for loop
} //funtion