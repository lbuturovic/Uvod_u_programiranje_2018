#include <stdio.h>
void sortiraj (float niz[], int vel)
{
	float*p,*q;
	p=niz;
	q=p+1;
	float temp,*min;
	while(p<niz+vel)
	{ 
		min=p;
		while(p+1<niz+vel)
		{
			q=p+1;
			if(*q<*min) min=q;
			q++;
		}
		temp=*q;
		*q=*min;
		*min=temp;
		p++;
	}
		
		
	}
	

int main() {
	
	return 0;
}
