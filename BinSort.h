
void binSort(int rec[], int size){
	for (int i=2; i<size; i++){
		rec[0]=rec[i];
		int low=0;
		int high=i-1;
		while (low<=high){
			int mid=(low+high)/2;
			if (rec[mid]>rec[0]){
				high=mid-1;
			}else{
				low=mid+1;
			}
		}
		for (int k=i-1; k>=low; k--){
			rec[k+1]=rec[k];
		}
		rec[low]=rec[0];
	}
}