#include <stdio.h>

int main() {
	int a[10],b[10],c[10],i=0,n,m,j;
	printf("Unesite elemente niza A: ");
	do
	{
	    scanf("%d",&a[i]);
	    if (a[i]==-1) break;
	    if(a[i]<=0) continue;
	    i++;
	    
	}
	while(i<10);
	n=i;
	printf("Unesite elemente niza B: ");
	j=0;
	do
	{
	    scanf("%d",&b[j]);
	    if (b[j]==-1) break;
	    if(b[j]<=0) continue;
	    j++;
	    
	}
	while(j<10);
	m=j;
	printf("Niz C glasi: ");
	for(i=0;i<n+m;i++)
	{
	    c[i]=a[i];
	}
	    
	     for(i=0;j<m;j++) 
	       for(i=n;i<m+n;i++)
	     { 
	       i=0;  
	       i+=j;
	     }
	      
	      
	      
	  
	
	return 0;
}
