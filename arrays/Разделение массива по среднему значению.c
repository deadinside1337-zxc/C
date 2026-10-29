/*Разделить массив на две части, поместив в первую элементы,
большие среднего арифметического массива, 
а во вторую — меньшие и равные среднему арифметическому.*/

#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int arr[100];
	for(int i = 0; i < n; i = i + 1){
		scanf("%d", &arr[i]);
	}
	int summa = 0;
	for(int i = 0; i < n; i = i + 1){
		summa = summa + arr[i];
	}
	double sr_arif = (double)summa / n;
	
	for(int i = 0; i < n; i = i + 1) {
		if(arr[i] > sr_arif) {
			printf("%d ", arr[i]);
		}
	}
	
	for(int i = 0; i < n; i = i + 1) {
		if(arr[i] <= sr_arif) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
