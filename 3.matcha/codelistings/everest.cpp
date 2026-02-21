size_t res = 0;
int delta = 86400;
for(size_t i0=0; i0<num_edges; i0++){
    int v0 = edges[i0][0];
    int v1 = edges[i0][1];
    int nv0_size = indPtr[v0+1] 
                    - indPtr[v0];
    int nv1_size = indPtr[v1+1] 
                    - indPtr[v1];
    int e0_t = eInfo[i0];
    int t_bound = e0_time + delta;

    for(size_t i1=0; i1<nv1_size; i1++){
        int v2 = nbr[indPtr[v1]+i1];
        int nv2_size = indPtr[v1+1] 
                        - indPtr[v1];
        int e1_t = eInfo[indPtr[v1]+i1];
        if(v2==v1    || 
           e1_t<e0_t || 
           e1_t>t_bound){
            continue;
        }
        for(size_t i2=0; i2<nv2_size; i2++){
            int v3 = nbr[indPtr[v2]+i2];
            int nv3_size = indPtr[v2+1] 
                             - indPtr[v2];
            int e2_t = eInfo[indPtr[v2]+i2];

            if(v3==v1    || 
               v3==v0    || 
               e2_t<e1_t || 
               e2_t>t_bound){
                 continue;
            }
            res+=1;}}}