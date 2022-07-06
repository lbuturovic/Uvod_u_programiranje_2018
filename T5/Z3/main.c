#include <stdio.h>
#define EL 5

int main() {
	double A[5],B[5],C[5];
	int i;
	printf("Unesite clanove niza A: ");
	for(i=0;i<5;i++)
	scanf("%lf",&A[i]);
	printf("Unesite clanove niza B: ");
	for(i=0;i<5;i++)
	scanf("%lf",&B[i]);
	printf("Niz A glasi: ");
	
	for(i=0;i<5;i++)
	{
	if(i==4) printf("%.2f\n",A[4]);
	else
	printf("%.2f, ",A[i]);
	}
	printf("Niz B glasi: ");
	for(i=0;i<5;i++)
	{
	if(i==4) printf("%.2f\n",B[4]);
	else
	printf("%.2f, ",B[i]);
	}
	
	for(i=0;i<5;i++)
		C[i]=2*A[i]+B[i];
	
	
	
	printf("Niz C glasi: ");
	for(i=0;i<5;i++)
	{
	if(i==4) printf("%.2f",C[4]);
	else
	printf("%.2f, ",C[i]);
	}
	
	return 0;
}
