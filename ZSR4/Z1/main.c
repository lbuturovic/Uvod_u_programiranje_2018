#include <stdio.h>

int main() {
	int pr=1,i,n;
	printf("Unesite n: ");
	scanf("%d",&n);
	if(n<=0) {
		printf("\nBroj nije prirodan");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		if(i%2==0) pr=pr*i;
		
	}
	printf("\nProizvod je: %d",pr);
	
	return 0;
}
