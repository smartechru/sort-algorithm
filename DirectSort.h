
void directSort(int rec[], int size){
	for (int i=2; i<size; i++){
		rec[0]=rec[i];
		int k=i-1;
		while (rec[0]<rec[k]){
			rec[k+1]=rec[k--];
		}
		rec[k+1]=rec[0];
	}
}
