#include <stdio.h>
#include <math.h>
#define PI 4*atan(1.0)
/* Definicija tacke i kruznice */
struct Tacka {
    double x,y;
};
struct Kruznica {
    struct Tacka centar;
    double poluprecnik;
};

/* Funkcije za unos */
struct Tacka unos_tacke() {
    struct Tacka t;
    printf ("Unesite koordinate tacke (x, y): \n");
    scanf ("%lf,%lf", &t.x, &t.y);
    return t;
}

struct Kruznica unos_kruznice() {
    struct Kruznica k;
    printf ("Unesite centar kruznice:\n");
    k.centar = unos_tacke();
    printf ("Unesite poluprecnik kruznice: \n");
    scanf("%lf", &k.poluprecnik);
    return k;
}
double obim_kruznice(struct Kruznica k)
{
	return 2*PI*k.poluprecnik;
	
	
}
double povrsina_kruznice(struct Kruznica k) {
	
	return PI*k.poluprecnik*k.poluprecnik;
}

/* Funkcija za udaljenost izmedju dvije tacke */
float udaljenost(struct Tacka t1, struct Tacka t2) {
    return sqrt( (t1.x-t2.x)*(t1.x-t2.x) + (t1.y-t2.y)*(t1.y-t2.y) );
}

/* Glavni program: Da li je tacka unutar kruznice */
int main() {
    struct Kruznica k;
    struct Tacka t;
    double d;
    printf ("Unesite kruznicu:\n");
    k = unos_kruznice();
    printf ("Unesite neku tacku:\n");
    t = unos_tacke();

    /* Tacka se nalazi unutar kruznice ako je udaljenost tacke od centra
    kruznice manja od poluprecnika kruznice */
    d = udaljenost(t, k.centar);
    if (d<k.poluprecnik)
        printf("Tacka je unutar kruznice.\n");
    else if (d==k.poluprecnik)
        printf("Tacka je na kruznici.\n");
    else
        printf("Tacka je izvan kruznice.");
    printf("Obim kruznice: %.3f\n", obim_kruznice(k));
    printf("Povrsina kruznice: %.3f",povrsina_kruznice(k));
    return 0;
}
