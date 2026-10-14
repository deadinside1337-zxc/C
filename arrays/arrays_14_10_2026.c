//практическая 14.10.2026

#include <stdio.h>
int main () {
	int arr[100];
	int n;
	int index_first_max;
	int index_last_min;
	int summa = 0;
	int x;
	scanf("%d", &x);
	int count_x = 0;
	scanf("%d", &n);
	
//запись
	for (int i = 0; i < n; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	
//поиск суммы
	for(int i = 0; i < n; i = i + 1) {
		summa = summa + arr[i];
	}
	
//поиск 1 максимального
	int max = arr[0];
	for(int i = 1; i < n; i = i + 1) {
		if(arr[i] > max) {
			index_first_max = i;
			break;
		}
	}
	for(int i = 1; i < n; i = i + 1) {
		if(arr[i] > max) {
			max = arr[i];
			break;
		}
	}
	
//поиск последнего минимального
	int min;
	min = arr[n];
	for(int i = n; i < n; i = i - 1) {
		if(arr[i] < min) {
			index_last_min = i;
			break;
		}
	}
	
//число x. посчитать число вхождений
	for(int i = 0; i < n; i = i + 1) {
		if(arr[i] == x) {
			count_x = count_x + 1;
		}
	}
	for(int i = 0; i < n; i = i + 2) {
		printf("%d \n", arr[i]);
	}
	printf("%d\n", &summa);
	printf("%d\n", &index_first_max);
	printf("%d\n", &index_last_min);
	printf("%d\n", &count_x);
	return 0;
}
