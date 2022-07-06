#include <stdio.h>
#include <math.h>
#define EPSILON ((long double)0.000000001)

int main() {
	long double x1,y1,k,nn,x2,y2;
	long int m,n,i=0,f=0,xt,yt,xp,yp;
	printf("Unesite brojeve x1 y1 xp i yp: ");
	scanf("%li %li %li %li",&xt,&yt,&xp,&yp);
	printf("Unesite n i m: ");
	scanf("%li %li",&n,&m);
	k=(long double)(yp-yt)/(xp-xt);
	nn=(long double)(yt-k*xt); /* prema formuli y=kx+n*/
	if((xp==0 && yp==0) || (xp==n && yp==0) || (xp==0 && yp==m) || (xp==n && yp==m))
	printf("-1 0");
	else
	{
		y2=(long double)yp;
		x2=(long double)xp;
		do
		{
			x2=x1;
			y2=x1;
			k=(-1)*k;
			nn=y2-k*x1;
			if((k*n+nn)>EPSILON && (m-(k*n+nn))>EPSILON)
			{
				i++;
				y1=k*n+nn;
				x1=n;
			}
			else if(((-1*nn)/k)>EPSILON && (n+(1*nn)/k)>EPSILON)
			{
			    i++;
				y1=0;
				x1=((-1)*nn)/k;
			}
			else if(nn>EPSILON && (m-nn)>EPSILON)
			{
				i++;
				y1=nn;
				x1=0;
			}
			else if(((m-nn)/k)>EPSILON && (n-(m-nn)/k)>EPSILON)
			{
				
				x1=(m-nn)/k;
				y1=m;
			}
			if((fabsl(x1)<EPSILON && fabsl(y1)<EPSILON) || (fabsl(x1)<EPSILON && fabsl(y1-m)<EPSILON) || (fabsl(y1)<EPSILON && fabsl(x1-n)<EPSILON)
			|| (fabsl(x1-n)<EPSILON && fabsl(y1-m)<EPSILON))
			{
				f=-1;
				break;
			}
			i=i+1;
		}while(fabsl(k*x1+nn-yp)>EPSILON);
		
		printf("%li %li",f, i);
		
		}
		return 0;
	}
