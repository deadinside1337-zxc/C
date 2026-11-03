#include <stdio.h>

struct point { //структура point
	int x;
	int y;
};

int main () {
	struct point p[5];
	
	int x[5];
	int y[5];
	for(int i = 0; i < 5; i = i + 1) {
		printf("vvedite x dlya p%d ", i + 1);
		scanf("%d", &x[i]);
		printf("vvedite y dlya p%d ", i + 1);
		scanf("%d", &y[i]);
	}

	for (int i = 0; i < 5; i = i + 1) {
		p[i].x = x[i];
		p[i].y = y[i];
	}
	
	
	for(int i = 0; i < 5; i = i + 1) {
		printf("point (%d, %d)\n", p[i].x, p[i].y);
	}
	
	struct point center;
	center.x = 0;
	center.y = 0;
	
	int max = 0;
	int min = 0;
	for(int i = 0; i < 5; i = i + 1) {

	}
	
	return 0;
}

