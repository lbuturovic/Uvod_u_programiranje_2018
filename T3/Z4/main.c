#include <stdio.h>

int main() {
	int i,j,n;
	printf("Unesite broj n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(j==0 && (i%2)!=0) printf(" ");
		printf("* ");
		}
		printf("\n");
	}
	return 0;
}
