/*
1. Массив структур
2. По своим вариантам - структуры на основе таблиц БД
3. Подготовить тестовые входные файлы
4. Подготовить задания
5. Подготовить тестовые выходные файлы
*/
/* Пункт 1. Структура Студент
Поля. Имя. Год рождения. Номер зачетки */
#include <stdio.h>
struct student {
	int regno;  //номер зачетки
	int birth_day;  //день рождения
	int birth_month;  //месяц рождения
	int birth_year;  //год рождения
	char name[20];  //имя
	
};
struct student st;


int main() {
	struct student group[30];
	int n;
	printf("n studentov: ");
	scanf("%d", &n);
	printf("\n");
	int i;
	
	for (i = 0; i < n; i = i + 1) {
		printf("id birth_year birth_month birst_day name\n");
		scanf("%d %d %d %d %s", &st.regno, &st.birth_year, &st.birth_month, &st.birth_day, st.name);
		group[i] = st;
	}
	/* Кто родился не поздней 2008 года */
	
	for (i = 0; i < n; i = i + 1) {
		if (group[i].birth_year <= 2008)
			printf("id = %d, birth_year = %d, birth_month = %d, birth_day = %d, name = %s", 
				group[i].regno,
				group[i].birth_year,
				group[i].birth_month,
				group[i].birth_day,
				group[i].name
						
		);
	}
	return 0;
}


