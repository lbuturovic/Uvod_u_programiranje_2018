#include <stdio.h>
#include <math.h>

int main() {
	int i,n,brojnik=1;
	double s=0,a;
	printf("Unesite broj n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=(double)brojnik/i;
		s+=a;
		brojnik=-brojnik;
	
	}
	printf("Koristeci %d clanova suma je %.3f.",n,s);
	return 0;
	
}
