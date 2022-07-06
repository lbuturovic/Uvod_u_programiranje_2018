#include <stdio.h>

int faktorijel(int m)
{
	int i;
	int fakt=1;
	for(i=1;i<=m;i++)
	fakt*=i;
	return fakt;
	
}

int main() {
	int n,i;
	double x,s=0;
	printf("Unesite broj n u intervalu [1, 12]: ");
	scanf("%d",&n);
	printf("Unesite realan broj x: ");
	scanf("%lf",&x);
	for(i=1;i<=n;i++)
	s+=x/faktorijel(i);
	printf("Suma od 1 do %d za x = %.3f je %.3f",n,x,s);
	return 0;
}
