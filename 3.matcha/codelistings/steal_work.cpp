//tid0: stealing thread id
//tid1: stolen thread id
steal_work(start, end, iter, tid0, tid1){

for(int level=0; level<num_loop; level++){
	num_left_task = (end[tid1][level] - 
	                iter[tid1][level]);
	
	if(num_left_task==0) continue
		
	cut_pos = iter[tid1][level] + 
	          num_left_task/2;
	
	start[tid0][level] = start[tid1][level];
	end[tid0][level] = end[tid1][level];
	iter[tid0][level] = cut_pos;
	end[tid1][level] = cut_pos;
	return true;
}
return true;

}