#include <stdio.h>

float maxtemp(float p[], int br)
{
	float max=*p;
	int *q=p+br;
	while(p<q) {
		if(*p>max) max=*p;
		p++;

	}

	return max;

}

float prtemp(float p[],int br)
{
	float s=0;
	int *q=p+br;
	while(p<q) {
		s=s+*p;
		p++;

	}

	return s/br;

}

int main()
{
	float temp[100];
	int i,n;
	printf("Unesite broj mjerenja: ");
	scanf("%d",&n);
	printf("Unesite temperature: ");
	for(i=0; i<n; i++)
		scanf("%f",&temp[i]);
	printf("Maksimalna temperatura: %.1f",maxtemp(temp, n));
	printf("\nProsjecna temperatura: %.1f",prtemp(temp,n));
	return 0;
}
