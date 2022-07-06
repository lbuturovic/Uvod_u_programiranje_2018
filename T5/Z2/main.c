#include <stdio.h>
#define BROJ_EL 10

int main() {
	int niz[BROJ_EL],sumap=0,suma=0,i,br=0,min,max;
	float prosjek=0, prosjekp=0;
	for(i=0;i<BROJ_EL;i++)
	{
		printf("Unesite %d. cijeli broj: ",i+1);
		scanf("%d",&niz[i]);
		if(i==0)
		{
			min=niz[0];
			max=niz[0];
		}
		if(niz[i]%2==0)
		{
			br++;
			sumap+=niz[i];
		}
		suma+=niz[i];
		if(niz[i]>max) max=niz[i];
		if(niz[i]<min) min=niz[i];
	}
	prosjek=(float)suma/BROJ_EL;
	prosjekp=(float)sumap/br;
	if(br==0) prosjekp=0;
	printf("Srednja vrijednost unesenih brojeva je %.2f.\n",prosjek);
	printf("Srednja vrijednost parnih brojeva je %.2f.\n",prosjekp);
	printf("Najveci element je %d a najmanji %d.",max,min);
	
	return 0;
}
