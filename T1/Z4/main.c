#include <stdio.h>
#define PI 3.14

int main() {
	printf("Tutorijal 1, Zadatak 4");
	double a, b, c, r, hv, P, V;
	printf("\nUnesi visinu, sirinu i duzinu kvadra.\n");
	scanf("%lf %lf %lf",&a, &b, &c);
	printf("Unesi poluprecnik i visinu valjka.\n");
	scanf("%lf %lf", &r, &hv);
	P=2*(a*b+b*c+c*a)+2*r*PI*hv;
	V=a*b*c+r*r*PI*hv;
	printf("Povrsina tijela je %.2f, a njegova zapremina je %.2f .", P, V);
	return 0;
}
