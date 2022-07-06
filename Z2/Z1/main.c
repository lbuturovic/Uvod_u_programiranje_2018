#include <stdio.h>

int main() {
	int i,j,n;
	do
	{
	printf("Unesite broj N: ");
	scanf("%d",&n);
	if((n-1)%4!=0 || (n-1)%4<0) 
	{
		printf("N nije ispravno!\n");
		continue;
	}
	else break;
	} while((n-1)%4!=0);
	
	for(i=1;i<=n;i++)
	{
		printf("\n");
		
		for(j=1;j<=n;j++)
		{
			if(i==1) printf("*");
		    else if(j==n) printf("*");
			else if(i==n) printf("*");
			else if(j==1 && i>2) printf("*");
			else if(i==2 && j!=n) printf(" ");
			else if(i==n-1 && j!=1 && j!=n) printf(" "); 
			else if(i%2!=0 && i<=(n/2)+1 && j>i-3 && j<n-i+2) printf("*");
			else if(i%2!=0 && i>(n/2)+1 && j>n-i && j<i) printf("*");
			else if(i%2==0 && j>i-3 && j<n-i+2) printf (" ");
			else if(i%2==0 && i>=(n/2)+1 && j>n-i && j<i) printf(" ");
			else if(j%2!=0) printf("*");
			
			/*postavi uslove za j za zvjezdice i za srednju liniju*/
		
			else printf(" ");
			
			
			
			
			
			
		}
		
	}
	return 0;
}
