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

/*int index_of_max_in_matrix(int matrix[][MAXCOLS], int rows, int cols) {
	int index_max[2];
	for(int i = 0; i < rows; i = i + 1) {
		for(int j = 0; j < cols; j = j + 1) {
			if(matrix[i][j] > max) {
				index_max[1] = i;
				index_max[2] = j;
			}
		}
	}
	return index_max;
}*/
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
			printf("%d", &matrix[i][j]);
		}
		printf("\n");
	}
	int result = max_in_matrix(matrix, rows, cols);
	printf("max in matrix: %d\n", result);
	return 0;
}
