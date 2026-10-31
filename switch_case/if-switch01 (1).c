/*
1. ѕо номеру мес€ца - количество дней
2. ѕо номеру мес€ца - врем€ года 
*/

#include <stdio.h>
int main() {
	int day;
	int month;
	
	
	printf("day = ");
	scanf("%d",&day);
	printf("\n");
	printf("month = ");
	scanf("%d", &month);
	printf("\n");
	
	
	switch (day) {
	case 1:
		printf("day of the week = Mon\n");
		break;
	case 2:
		printf("day of the week = Tue\n");
		break;
	case 3:
		printf("day of the week = Wed\n");
		break;
	case 4:
		printf("day of the week = Thu\n");
		break;
	case 5:
		printf("day of the week = Fri\n");
		break;
	case 6:
		printf("day of the week = Sat\n");
		break;
	case 7:
		printf("day of the week = Sun\n");
		break;
	default:
		printf("Error\n");
		break;
	}
	
	switch (month) {
		// мес€цы с 31 днем
		case 1:  // €нварь
		case 3:  // март
		case 5:  // май
		case 7:  // июль
		case 8:  // август
		case 10:
		case 12: 
		printf("31 dney\n");
		break;
		
		
		case 4:
		case 6:
		case 9:  
		case 11: 
		printf("30 dney\n");
		break;
		
	case 2:
		printf("28 dney\n");
		break;
		
	default:
		printf("error\n");
		break;
	}
	
	switch (month) {

	case 12:
	case 1:
	case 2:
		printf("Zima\n");
		break;

	case 3:
	case 4:
	case 5:
		printf("BecHa\n");
		break;

	case 6:
	case 7:
	case 8:
		printf("Leto\n");
		break;
		
	case 9:
	case 10:
	case 11:
		printf("osenb\n");
		break;
		
	default:
		printf("error\n");
		break;
	}
	
	return 0;
}

