#include <stdio.h>
#include <math.h>

int main() {
	float x1, x2, x3, y1, y2, y3, d;
	printf("Tutorijal 1, Zadatak 3");
	printf("\n Unesi koordinate tacke T1.\n");
	scanf("%f %f %f", &x1, &x2, &x3);
	printf("\n Unesi koordinate tacke T2.\n");
	scanf("%f %f %f", &y1, &y2, &y3);
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(x3-y3)*(x3-y3));
	printf("Udaljenost izmedju tacaka T1 i T2 je %f .",d);
	return 0;
}
