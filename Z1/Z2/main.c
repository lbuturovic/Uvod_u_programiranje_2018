#include <stdio.h>

int main() {
	int iznos,a;
	printf("Unesite iznos: ");
	scanf("%d",&iznos);
	a=iznos/50;
	printf("%d novcanica od 50 KM\n",a);
	iznos=iznos%50;
	a=iznos/20;
	printf("%d novcanica od 20 KM\n",a);
	iznos=iznos%20;
	a=iznos/10;
	printf("%d novcanica od 10 KM\n",a);
	iznos=iznos%10;
	a=iznos/5;
	printf("%d novcanica od 5 KM\n",a);
	iznos=iznos%5;
	a=iznos/2;
	printf("%d novcanica od 2 KM\n",a);
	iznos=iznos%2;
	printf("%d novcanica od 1 KM\n",iznos);
	return 0;
}
