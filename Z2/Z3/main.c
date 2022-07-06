#include <stdio.h>

int main() {
	int n,niz[100],niz2[100],i,x,istina=1;
	printf("Unesite N: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&niz[i]);

    for(x=0;x<99999;x++)
    {
    	istina=1;
	for(i=0;i<n;i++)
	niz2[i]=niz[i]^x;
	   	
	   	for(i=1;i<n;i++)
	   {
	   	if(niz2[i]<niz2[i-1])  {     istina=0;
	   								 break;
	   									}
	   	
	   }
	   
	   if(istina==1) {printf("X=%d",x); break;}
	  }
	  if(istina==0) printf("X=-1");
	return 0;
}
