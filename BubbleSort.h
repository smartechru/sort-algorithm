
void bubbleSort(int key[], int n){
	bool flag;
	for (int i=1; i<n; i++){
		flag=false;
		for (int k=n-1; k>i; k--){
			if (key[k]<key[k-1]){
				int temp=key[k-1];
				key[k-1]=key[k];
				key[k]=temp;
				flag=true;
			}
		}
		if (flag==false) return;
	}
}