/*
Разность дат. Функция
*/

#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} Date;

Date get_date_diff(Date date_begin, Date date_end) {
	Date date_diff;
	date_diff.day = date_end.day - date_begin.day;
	date_diff.month = date_end.month - date_begin.month;
	date_diff.year = date_end.year - date_begin.year;
	
	if (date_diff.day < 0){
		date_diff.day += 30;
		--date_diff.month;
	}
	
	if (date_diff.month < 0){
		date_diff.month += 12;
		--date_diff.year;
	}
	return date_diff;	
}

void print_date(Date date);
/* Печать даты - самостоятельно */

int main() {
	Date date_begin;
	Date date_end;
	Date date_diff;

	scanf("%d.%d.%d", &date_begin.year, &date_begin.month, &date_begin.day);
	scanf("%d.%d.%d", &date_end.year, &date_end.month, &date_end.day);

	date_diff = get_date_diff(date_begin, date_end);
	printf("%d.%d.%d\n", date_diff.year, date_diff.month, date_diff.day);

	return 0;
}

