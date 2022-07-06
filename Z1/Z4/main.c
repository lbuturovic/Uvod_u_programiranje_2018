#include <stdio.h>
#include <math.h>
#define EPSILON ((long double)0.0000000001)

int main() {
	long double x1,y1,k,nn,xt,yt,xp,yp,m,n;
	long int i=0,f=0;
	printf("Unesite brojeve x1 y1 xp i yp: ");
	scanf("%Lf %Lf %Lf %Lf",&xt,&yt,&xp,&yp);
	printf("Unesite n i m: ");
	scanf("%Lf %Lf",&n,&m);
	k=(long double)(yp-yt)/(xp-xt);
	nn=(long double)(yt-k*xt); /* prema formuli y=kx+n*/
	if((fabsl(xp)<EPSILON && fabsl(yp)<EPSILON) || (fabsl(xp)<EPSILON && fabsl(yp)<EPSILON) || (fabsl(xp)<EPSILON && fabsl(yp)<EPSILON) 
	|| (fabsl(xp)<EPSILON && fabsl(yp)<EPSILON))
	printf("-1 0");
	else
	{
		y1=yp;
		x1=xp;
		do
		{
			k=(-1)*k;
			nn=y1-k*x1;
			if((k*n+nn>0 || fabsl(k*n+nn)<EPSILON)&& (k*n+nn<m) || fabsl(k*n+nn-m)<EPSILON) && fabsl(x1-n)>EPSILON)
			{
				y1=k*n+nn;
				x1=n;
			}
			else if( ((-1)*nn/k>0 || fabsl((-1)*nn/k)<EPSILON) && ( ((-1)*nn)/k<n || fabsl(((-1)*nn)/k-n)<EPSILON) && fabsl(y1)>EPSILON)
			{
				y1=0;
				x1=((-1)*nn)/k;
			}
			else if(  (nn>0 || fabsl(nn)<EPSILON) && (nn<m || fabsl(nn-m)<EPSILON) && fabsl(x1)>EPSILON)
			{
				y1=nn;
				x1=0;
			}
			else if(((m-nn)/k>0 || fabsl((m-nn)/k)<EPSILON) && ((m-nn)/k<n || fabsl((m-nn)/k-n)<EPSILON ) && fabsl(y1-m)>EPSILON)
			{
				x1=(m-nn)/k;
				y1=m;
			}
			else if((fabsl(x1)<EPSILON && fabsl(y1)<EPSILON) || (fabsl(x1)<EPSILON && fabsl(y1-m)<EPSILON) || (fabsl(y1)<EPSILON && fabsl(x1-n)<EPSILON)
			|| (fabsl(x1-n)<EPSILON && fabsl(y1-m)<EPSILON))
			{
				f=-1;
				if(i!=0)
				i++;
				break;
			}
			i++;
		}while(fabsl (yt-k*xt-nn)>EPSILON);
		
		printf("%li %li",f, i);
		
		}
		return 0;
	}
	