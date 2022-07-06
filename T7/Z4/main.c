#include <stdio.h>
#include<math.h>

int obrnut (int n)
{
	int cifra, cif=0,m=n;
	do
	{
		n=n/10;
		cif++;
	}while(n!=0);
	

	n=0;
	do
	{
	  cifra=m%10;
	  n+=cifra*pow(10,cif-1);
	  cif--;
	  	  m=m/10;

		
	}while(m!=0);
	
	return n;
	
}

int main() {
	int x;
	scanf("%d",&x);
	obrnut(x);
	printf("%d",obrnut(x));
	
	return 0;
}
