//написать функцию которая считает сколько раз символ target встречается в строке s
#include <stdio.h>

int count_char(char s[], char target) {
	int len = 0;
	int count = 0;
	while(s[len] != '\0') {
		if(s[len] == target) {
			count = count + 1;
		}len = len + 1;
	} 
	return count;
}

int main () {
	char target;
	char str[100];
	printf("string = ");
	scanf("%s", str);
	printf("target = ");
	scanf(" %c", &target);
	
	printf("%d\n", count_char(str, target));
	return 0;
}
