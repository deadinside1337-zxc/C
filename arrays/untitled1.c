//Вывести сначала чётные элементы массива, а затем нечётные.

#include <stdio.h>

int main() {
	int arr[100];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i = i + 1){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i = i + 1) {
		if(arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	for(int i = 0; i < n; i = i + 1) {
		if(arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
