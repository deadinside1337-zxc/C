//сдвиг массива вправо на k позиций. элементы которые ушли за границу должны появится в начале.

//1 2 3 4 5 
//k = 2
//4 5 1 2 3 



#include <stdio.h>

int main () {
	int arr[100];
	int arr2[100];
	int n;
	int k;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i = i + 1) {
		arr2[i] = arr[i]; // копия массива 1 2 3 4 5
	}
	
    
	for(int i = 0; i < k; i = i + 1) {  //после этого цикла получится массив 4 5 5 4 5
		arr[i] = arr[i + (n - k)];
	}
	
	for(int i = 0; i < n - k; i = i + 1) {  // 4 5 5 4 5
	arr[i + k] = arr2[i];                   // 4 5 | | |
	}                                       // 4 5 1 2 3  берём числа из копии arr2
	
	
	
	for(int i = 0; i < n; i = i + 1) {
		printf("%d ", arr[i]);
	}
}
