//cортировка 15.10

#include <stdio.h>
int main () {
	int arr[100];
	int i, j, n;
	scanf("%d", &n);
	for(int i = 0; i < n; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n - 1; i = i + 1) {
		int imin = i;
		for(j = i + 1; j < n; j = j + 1) {
			if(arr[j] < arr[imin]) {
				imin = j;
			}
		}
		if (i != imin) {
			int t = arr[i];
			arr[i] = arr[imin];
			arr[imin] = t;
		}
	}
	for(int i = 0; i < n; i = i + 1) {
		printf("%d ", arr[i]);
	}
	
	
	
	return 0;
}
