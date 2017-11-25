
void shellSort(int rec[], int size){
	int inc=1;
	while (inc<size){
		inc*=2;
	}
	for (inc=inc/2-1; inc>0; inc=(inc+1)/2-1){
		for (int i=inc; i<size; i+=inc){
			rec[0]=rec[i];
			int k=i-inc;
			while (rec[0]<rec[k]){
				rec[k+inc]=rec[k];
				k-=inc;
			}
			rec[k+inc]=rec[0];
		}
	}
}