__global__ void gpu_kernel(G03_indPtr, ...) {
 int tid = warp_id;
 for (int i0=warp_id;i0<len1;i0+=num_warp){
    @\hlmygreen{int lst[2];}@
    ... 
    @\hlmyorange{int nb\_h = \_hash(L01[i0][0]);}@
    @\hlmyorange{int nb\_p0 = G03\_indPtr[nb\_h][1];}@
    @\hlmyorange{int nb\_p1 = G03\_indPtr[nb\_h][2];}@ 
    @\hlmygreen{lst[0] = L01[i0][1];}@
    @\hlmyyellow{for (int i2 = 0; i2 < C2\_size; i2++) \{ }@
        @\hlmygreen{lst[1] = C2[i2];}@ @\hlmypurple{int df\_pos;}@
        @\hlmypurple{\_diff(df\_pos, G03\_nbr, nb\_p0, nb\_p1, lst);}@
        @\hlmyyellow{sum1[tid] = sum1[tid] + df\_pos;}@
    @\hlmyyellow{\}}@
    apl0_out[tid][i0] = sum1[tid];
  } //i0 for loop
} //kernel function

int RapidMatch(..., int L03[][2]) {
 @\hlmyblue{cudaMalloc(G03\_nbr, len3 * sizeof(int));}@
 @\hlmyblue{cudaMalloc(G03\_indPtr, H * 3 * sizeof(int));}@
 cudaMalloc(apl0_out, 
   num_warp*_max_degree(L01)*sizeof(int));
 @\hlmyyellow{cudaMalloc(sum1, num\_warp * sizeof(int));}@
 //init sum1 to 0
 ... 
 @\hlmyblue{\_init\_graph(L03, len3, G03\_nbr, G03\_indPtr);}@
 gpu_kernel<<<DIM1, DIM2>>>(G03_indPtr, ...);
}