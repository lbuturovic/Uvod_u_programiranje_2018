#include <stdio.h>
#include <math.h>
#define EPSILON 0.000000001

int main() {
	long double x1,y1,k,nn;

	long int m,n,i=0,f=0,xt,yt,xp,yp;
	printf("Unesite brojeve x1 y1 xp yp: ");
	scanf("%li %li %li %li",&xt,&yt,&xp,&yp);
	printf("Unesite n i m: ");
	scanf("%li %li",&n,&m);
	k=(long double)(yp-yt)/(xp-xt);
	nn=(long double)yt-k*xt; /* prema formuli y=kx+n*/
	if((xp==0 && yp==0) || (xp==n && yp==0) || (xp==0 && yp==m) || (xp==n && yp==m))
	printf("-1 0");
	else 
	{
	y1=yp;
	x1=xp;
 	do
	{
		k=(-1)*k;
		nn=y1-k*x1;
		if(((k*n+nn)>0 || fabsl(k*n+nn)<EPSILON) && (k*n+nn<m || fabsl(k*n+nn-m)<EPSILON) && fabsl(x1-n)>EPSILON)
		{
			i++;
			y1=k*n+nn;
			x1=n;
		}
		else if((((-1)*nn)/k>0 || fabsl((-1)*nn/k)<EPSILON) && (((-1)*nn)/k<n || fabsl(((-1)*nn)/k-n)<EPSILON && fabsl(y1)>EPSILON))
		{
			i++;
			y1=0;
			x1=((-1)*nn)/k;
		}
		else if((nn>0 || fabsl(nn)<EPSILON) && (nn<m || fabsl(nn-m)<EPSILON) && fabsl(x1)>EPSILON)
		{
			i++;
			y1=nn;
			x1=0;
		}
		else if(((m-nn)/k>0 || fabsl((m-nn)/k)<EPSILON) && ((m-nn)/k-n)<EPSILON && fabsl(y1-m)>EPSILON )
		{
			i++;
			x1=(m-nn)/k;
			y1=m;
			
		}
		if((fabsl(x1)<EPSILON && fabsl(y1)<EPSILON) || (fabsl(x1)<EPSILON && fabsl(y1-m)<EPSILON) || (fabsl(y1)<EPSILON && fabsl(x1-n)<EPSILON) 
		|| (fabs(x1-n)<EPSILON && fabsl(y1-m)<EPSILON))
		{
			f=-1; 
			break;
		}
			
		
	} while(fabsl(yt-k*xt-nn)>EPSILON);
	printf("%li %li",f,i);
	}
	return 0;
	
	}