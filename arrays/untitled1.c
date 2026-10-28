#include <stdio.h>
int main(void)
{
	int arr[100];
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i = i + 1) { //ввод массива
		scanf("%d", &arr[i]);
	}
	//1 2 3 4 5 6
	for(int i = n - 1; i >= 0; i = i - 1) {
		if(i != 0){
			printf("%d_", arr[i]);
		}
		else
			printf("%d", arr[i]);
	}
	
	return 0;
}
