//является ли массив полиндромом?
#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int arr[100];
	for(int i = 0; i < n; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	//1 2 2 1
	int status = 1; //yes
	for(int i = 0; i < n/2; i = i + 1) {
		if(arr[i] != arr[n - 1 - i]) {
			status = 0;
		}
		break;
	}
	if(status == 0) {
		printf("NO");
	} else {
		printf("YES");
	}
	return 0;
}
