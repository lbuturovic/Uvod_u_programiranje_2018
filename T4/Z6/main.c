#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
	int r,br;
	printf("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
	printf("\n");
	srand(time(NULL));
	r=rand()%100 + 1;
	do
	{
		printf("Unesite broj: ");
		scanf("%d",&br);
		if(br==-1) break;
		if(br>r) printf("MANJI\n");
		if(br<r) printf("VECI\n");
	}
	while(br!=r);
	if(br==r) printf("JEDNAK\n");
	printf("Kraj igre.");
	return 0;
}
