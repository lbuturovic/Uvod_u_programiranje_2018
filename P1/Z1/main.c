#include <stdio.h>

int main() 
{
	int ts,tm,tb;
	char ps,pm,pb;
	printf("Unesite prognozu za Sarajevo:\n");
	printf("Temperatura: ");
	scanf("%d",&ts);
	do
	{
		printf("Padavine (D/N): ");
		scanf("%c",&ps);
		if(ps!='d' && ps!='D' && ps!='\n') printf("Pogresan unos.\n");
	}
	while(ps!='d' && ps!='D');
	printf("Unesite prognozu za Mostar:\n");
	printf("Temperatura: ");
	scanf("%d",&tm);
	do
	{
		printf("Padavine (D/N): ");
		scanf("%c",&pm);
		if(pm!='d' && pm!='D' && pm!='\n') printf("Pogresan unos.\n");
	
	}
	while(pm!='d' && pm!='D');
	printf("Unesite prognozu za Bihac:\n");
	printf("Temperatura: ");
	scanf("%d",&tb);
	do
	{
		printf("Padavine (D/N): ");
		scanf("%c",&pb);
		if(pb!='d' && pb!='D' && pb!='\n') printf("Pogresan unos.\n");
		n++;
	}
	while(pb!='d' && pb!='D');
	return 0;
}
