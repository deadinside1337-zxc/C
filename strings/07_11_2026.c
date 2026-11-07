
#include <stdio.h>
#define MAXN 100

// strlen
int my_strlen(char s[]) { //возвращает длину строки
	int i = 0;
	while(s[i] != '\0') {i++;}
	return i;
}

// strcpy
void my_strcpy(char to[], char from[]) { //копируем из from в to
	int i;
	for(i = 0; from[i] != '\0'; i++) {
		to[i] = from[i];
	}
	to[i] = '\0';
}
int main () {
	char from[MAXN];
	char to[MAXN];
	
	scanf("%s", from);
	my_strcpy(to, from);
	
	printf("from = %s\n", from);
	printf("to = %s\n", to);
	printf("len: %s = %d\n", to, my_strlen(to));
	return 0;
}
