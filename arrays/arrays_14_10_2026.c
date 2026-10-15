//практическая 14.10.2026
//1. Найти индекс первого максимального значения
//2. Найти кол-во значений, равных максимальному
//3. Найти индекс последнего минимального значения
//4. Сумма.
//5. Посчитать сколько раз встречается число X.

#include <stdio.h>
int main () {
	int arr[100];
	int n;
	int index_first_max;
	int index_last_min;
	int x;
	scanf("%d", &x);
	scanf("%d", &n);
	
//запись
	for (int i = 0; i < n; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	
//поиск суммы
	int summa = 0;
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
	int count_x = 0;
	for(int i = 0; i < n; i = i + 1) {
		if(arr[i] == x) {
			count_x = count_x + 1;
		}
	}
	for(int i = 0; i < n; i = i + 2) {
		printf("%d \n", arr[i]);
	}
	printf("%d\n", summa);
	printf("%d\n", index_first_max);
	printf("%d\n", index_last_min);
	printf("%d\n", count_x);
	return 0;
}
