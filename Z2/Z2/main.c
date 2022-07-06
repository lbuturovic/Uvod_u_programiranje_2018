#include <stdio.h>

int main() {
	int niz[100],i,m,n,pom,cifra,cif,istina,j,broj;
	
	printf("Unesite brojeve:\n");
	i=0;
	do
	{
		scanf("%d",&niz[i]);
		if(niz[i]==-1) break;
		i++;
		
	}while(i<100);
		m=i;
		n=m;
	 /*printf("Niz glasi: ");
	for(i=0;i<m;i++)
	printf("%d ", niz[i]); */
	
	for(i=0;i<m;i++)
	{
	   	
	   cifra=niz[i]%10;
	   broj=niz[i];
	   do
	   {
	   	cif=broj%10;
	   	if(cif!=cifra)
	   	{  
	   		istina=0;
	   		break;
	   		
	   	}
	   	else istina=1;
	   	
	   	broj=broj/10;
	   	
	   	
	   }
	   while(broj!=0);
	 
	   if(istina==0) 
	   {              /*u slucaju da program naidje na element niza kojem cifre nisu jednake
						ti elementi se "potiskuju" prema desno*/
	    
	   pom=niz[i];
	   for(j=i;j<n-1;j++)
	   niz[j]=niz[j+1];    
	   
		i--;
		niz[n-1]=pom;
		m--;
	}
	}
	
	printf("Nakon preslaganja niz glasi:\n");
	for(i=0;i<n;i++)
	{
	  if(i==n-1) printf("%d.",niz[i]);
	  else printf("%d,",niz[i]);
	}
	  	
	  	
	 
	
	return 0;
	
}
