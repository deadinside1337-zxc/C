#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100

int max_in_matrix(int matrix[][MAXCOLS], int rows, int cols) {
	int max = matrix[0][0];
	for(int i = 0; i < rows; i = i + 1) {
		for(int j = 0; j < cols; j = j + 1) {
			if(matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}
	return max;
}


int main () {
	int matrix[MAXROWS][MAXCOLS];
	int rows, cols;
	scanf("%d %d", &rows, &cols);
	for(int i = 0; i < rows; i = i + 1) {
		for(int j = 0; j < cols; j = j + 1) {
			scanf("%d", &matrix[i][j]);
		}
	}

	
	for(int i = 0; i < rows; i = i + 1) {
		for(int j = 0; j < cols; j = j + 1) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	
	int result = max_in_matrix(matrix, rows, cols);
	
	
	int index_max[2];
	for(int i = 0; i < rows; i = i + 1) {
		for(int j = 0; j < cols; j = j + 1) {
			if(matrix[i][j] == result) {
				index_max[0] = i;
				index_max[1] = j;
			}
		}
	}
	
	
	printf("max in matrix: %d\n", result);
	printf("index of max: ");
	for(int i = 0; i < 2; i = i + 1) {
		printf("%d ", index_max[i]);
	}
	return 0;
}
