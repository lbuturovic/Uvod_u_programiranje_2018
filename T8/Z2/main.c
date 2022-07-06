#include <stdio.h>

float maxtemp(float p[8])
{
	float max=*p;
	int *q=p+8;
	while(p<q) {
		if(*p>max) max=*p;
		p++;

	}

	return max;

}

float prtemp(float p[8])
{
	float s=0;
	int *q=p+8;
	while(p<q) {
		s=s+*p;
		p++;

	}

	return s/8;

}

int main()
{
	float temp[8];
	int i;
	printf("Unesite temperature: ");
	for(i=0; i<8; i++)
		scanf("%f",&temp[i]);
	printf("Maksimalna temperatura: %.1f",maxtemp(temp));
	printf("\nProsjecna temperatura: %.1f",prtemp(temp));
	return 0;
}
