#include <stdio.h>
#define PI 3.14

int main() {
	printf("Tutorijal 1, Zadatak 2");
	float R, P, V, PL;

    /* Unos poluprecnika sa tastature i izracunavanje */

    printf ("\n Unesite poluprecnik:");
    scanf ("%f", &R);
    P=(R*R)*PI;
    V=(4./3)*R*R*R*PI;
    PL=4.*R*R*PI;
    

    /* Ispis na monitoru*/
    printf("\n Povrsina kruga sa poluprecnikom %.2f je %.2f", R,P);
    printf("\n Zapremina kugle sa poluprecnikom %.2f je %.2f", R,V);
    printf("\n Povrsina lopte sa poluprecnikom %.2f je %.2f", R, PL);
	return 0;
}