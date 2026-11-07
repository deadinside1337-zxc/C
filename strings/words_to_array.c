/* 07.11.2026 Гусятинер Л.Б. & 201ИС-25 */
/* Вводятся слова. Поместить их в массив. Распечатать.*/
/* Задания.
1. Поместить в массив слова длиной не менее 5 (использовать)
my_strlen;
2. Распечатать в обратном порядке
3. Распечатать как в Питоне
[]
[hello]
[hello, world]
4. Перевести все слова в массиве в верхний регистр
Для этого написать функцию my_toupper(int ch)
!!5. Сколько слов представляют собой неотрицательные целые числа?
*/
#include <stdio.h>
#define WORD_LEN 20
#define ARR_LEN 20
void my_strcpy(char to[], char from[]) {
	/* копируем из from в to */
	int i;
	for (i = 0; from[i] != '\0'; i = i + 1) { 
		to[i] = from[i];
	}
	to[i] = '\0';
}

int my_strlen(char s[]) { //возвращает длину строки
	int i = 0;
	while(s[i] != '\0') {i++;}
	return i;
}

int main() {
	char words[ARR_LEN][WORD_LEN+1]= {""};
	char s[WORD_LEN+1] = "";
	int count = 0; 
	int i;
	while (count < ARR_LEN && 1 == scanf("%s", s)) {
		// Проверяем, что длина слова не менее 5 символов
		if (my_strlen(s) >= 5) {
			my_strcpy(words[count], s);
			count++;
		}
	}
	for (i = 0; i < count; ++i) {
		printf("%s\n", words[i]);
	}
	return 0;
}

