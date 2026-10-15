// proc1. Задачник Абрамяна.
// Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр;
// оба параметра являются вещественными). С помощью этой
// процедуры найти третьи степени пяти данных чисел.

#include <stdio.h>

void PowerA3(double a, double *b) {
	*b = a * a * a;
}

int main () {
	int n = 5;
	double arr[100];
	double arr2[100];
	for(int i = 0; i < n; i = i + 1) {
		scanf("%lf", &arr[i]);
	}
	for(int i = 0; i < n; i = i + 1) {
		arr2[i] = arr[i];
	}
	for(int i = 0; i < n; i = i + 1) {
		PowerA3(arr[i], &arr2[i]);
	}
	for(int i = 0; i < n; i = i + 1) {
		printf("%.2lf ", arr2[i]);
	}
	
	return 0;
}
