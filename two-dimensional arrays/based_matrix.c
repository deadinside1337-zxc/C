#include <stdio.h>
#define ROWS 3 //rows - строки
#define COLS 3 //cols - столбцы
/*
[0][0]  [0][1]  [0][2]     
[1][0]  [1][1]  [1][2]
[2][0]  [2][1]  [2][2]
*/

int main () {
	int matrix[ROWS][COLS]; //обьявление двумерого массива
	
    
    //два вложенных цикла для ввода двумерного массива
	for(int i = 0; i < ROWS; i = i + 1) { //внешний i (строки)
		for(int j = 0; j < COLS; j = j + 1) {//внутренний j(столбцы)
			scanf("%d", &matrix[i][j]);
		}
	}
	
	
	//вывод массива
	for(int i = 0; i < ROWS; i = i + 1) {
		for(int j = 0; j < COLS; j = j + 1) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n"); //перенос строки во внешнем цикле (переход на след строку)
	}
	
	
	/*
	сумма главной диагонали
	[1]  2   3 
	 4  [5]  6
	 7   8  [9]
	*/
	int sum_main_diagonal = 0;
	for(int i = 0; i < ROWS; i = i + 1) {
		sum_main_diagonal = sum_main_diagonal + matrix[i][i];
	}
	printf("%d\n", sum_main_diagonal);
	
	
	/*
	cумма побочной диагонали
	 1   2  [3]
	 4  [5]  6
	[7]  8   9
	*/
	int sum_anti_diagonal = 0;
	for(int i = 0; i < ROWS; i = i + 1) {
		sum_anti_diagonal = sum_anti_diagonal + matrix[i][COLS - 1 - i];
	}
	printf("%d", sum_anti_diagonal);

	return 0;
}
