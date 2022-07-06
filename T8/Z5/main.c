#include <stdio.h>
#include <math.h>
void zaokruzi (double niz[],int vel)
{
	double*p=niz;
	double*g=niz+vel;
	while(p<g)
	{
	 *p=*p*10;
	 *p=round(*p);
	 *p=*p/10;
	 p++;
		
	}
	
}

int main() {
	int i,n;
    double niz2[100];
    printf("Unesi n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%lf",&niz2[i]);
    zaokruzi(niz2,n);
    for(i=0;i<n;i++)
    printf("%f ",niz2[i]);
	return 0;
}
