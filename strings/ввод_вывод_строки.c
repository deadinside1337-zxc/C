#include <stdio.h>
#include <string.h>

//index  0 1 2 3 4 5
//symbol H e l l o \0
int main() {
	char s[100] = "Hello";
	printf("%s\n", s); //вывод hello (формат %s)
	
	char s1[100];
	scanf("%s", s1); //ввод без пробела
	printf("%s\n", s1);
	
	getchar(); //<-- удаляет \n чтобы fgets работал.
	
	char s2[100];
	fgets(s2, 100, stdin); //ввод с пробелами
	printf("%s", s2); 
	
	return 0; 
}
