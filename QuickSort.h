
int quickPass(double key[], int start, int last){
	int base=key[start];
	while (start<last){
		while (last && key[last]>=base) last--;
		key[start]=key[last];
		while (start<last && key[start]<=base) start++;
		key[last]=key[start];
	}
	key[start]=base;
	return start;
}

void quickSort(double key[], int start, int last){
	if (start<last){
		int i=quickPass(key, start, last);
		quickSort(key, start, i-1);
		quickSort(key, i+1, last);
	}
}
