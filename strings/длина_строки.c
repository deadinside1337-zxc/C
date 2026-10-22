#include <stdio.h>
#include <string.h>

int string_len(char s[]) { //функция
		int len = 0;
	while(s[len] != '\0'){
		len = len + 1;
	}
	return len;
}

int main () {
	char s[100];
	scanf("%s", s);
	int result = string_len(s);
	printf("%d", result);
	return 0;
}

