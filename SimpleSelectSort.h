
void simpleSelectSort(int rec[], int size){
	for (int i=0; i<size-1; i++){
		int pos=i;
		int min=rec[i];
		for (int j=i+1; j<size; j++){
			if (rec[j]<min){
				pos=j;
				min=rec[j];
			}
		}
		rec[pos]=rec[i];
		rec[i]=min;
	}
}