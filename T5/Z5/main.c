#include <stdio.h>

int main() {
	int n, niz[101]={0},i;
	printf("Unesite brojeve: ");
	do
	{
		scanf("%d",&n);
		if(n==-1) break;
		if (n<0 || n>100) 
		{
		    printf("\nBrojevi moraju biti izmedju 0 i 100!");
		    continue;
		}
		niz[n]++;
	 
	}
	
	while(n!=-1);
	printf("\n");
   for(i=0;i<101;i++)
   {
   	if (niz[i]!=0)
   	printf("Broj %d se javlja %d puta.\n", i,niz[i]);
   }
   
   return 0;
}