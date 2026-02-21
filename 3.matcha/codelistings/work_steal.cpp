int iter[num_thread][2];  \\ __shared__
int start[num_thread][2]; \\ __shared__
int end[num_thread][2];   \\ __shared__

while(true){
    int tid = current_thread_id;
    for (iter[tid][0] = start[tid][0]; 
         iter[tid][0] < end[tid][0]; ) 
    {
       lock(mutex[tid]);
       ... 
       for (iter[tid][1] = start[tid][1];
            iter[tid][1] < end[tid][1];
            iter[tid][1]++) 
        { 
            ...
            @\hlmyorange{nb\_h = \_hash(L03[iter[tid][0]][0]);}@
            @\hlmyorange{nb\_p0 = G03\_indPtr[h][0];}@
            ...
        }
       
       iter[tid][0]++;
       unlock(mutex[tid]);
    }
    if(steal_work(iter, start, end)==false) break;
}