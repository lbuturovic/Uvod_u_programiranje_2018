#include <stdio.h>
#include<math.h>
int main() {
	int broj,c,cifra,nbr=0,i=0;
	
	do
	{
		printf("Unesite broj: ");
	scanf("%d",&broj);
	}
	while(broj<0);
	do
	{
		printf("Unesite cifru: ");
		scanf("%d",&cifra);
		
	}
	while(cifra<0);
	do
	{ 
	  c=broj%10;
	  if(c!=cifra)
	  
	  {
	  	nbr=nbr+c*pow(10,i);
	  	i++;
	  }
		broj=broj/10;
	}
	while(broj!=0);
	printf("Nakon izbacivanja broj glasi %d.\n",nbr);
	printf("Broj pomnozen sa dva glasi %d.",nbr*2);
	return 0;
}
