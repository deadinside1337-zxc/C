//Proc2.  Описать процедуру PowerA234(A, B, C, D), вычисляющую вторую,
//третью и четвертую степень числа A и возвращающую эти степени соответственно в переменных B, C и D (A — входной, B, C, D — выходные
//параметры; все параметры являются вещественными). С помощью этой
//процедуры найти вторую, третью и четвертую степень пяти данных чисел.

#include <stdio.h>

void PowerA234(int a, int *b, int *c, int *d) {
	*b = a * a;
	*c = a * a * a;
	*d = a * a * a * a;
}

int main () {
	int result_b;
	int result_c;
	int result_d;
	int n = 5;
	int a;
	for(int i = 0; i < n; i = i + 1) {
		scanf("%d", &a);
		for(int i = 0; i < 1; i = i + 1) {
			PowerA234(a, &result_b, &result_c, &result_d);
			printf("b = %d, c = %d, d = %d\n", result_b, result_c, result_d);
		}
	}
	return 0;
}

