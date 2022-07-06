#include <stdio.h>

int main() 
{
	int ts,tm,tb;
	char ps='a',pm='b',pb='r',enter='\n';
	printf("Unesite prognozu za Sarajevo:\n");
	printf("Temperatura: ");
	scanf("%d",&ts);
	do
	{   if(ps!=enter)
		printf("Padavine (D/N): ");
		scanf("%c",&ps);
		if(ps!='d' && ps!='D' && ps!='n' && ps!='N' && ps!='\n') printf("Pogresan unos.\n");
	}
	while(ps!='d' && ps!='D' && ps!='n' && ps!='N');
	printf("Unesite prognozu za Mostar:\n");
	printf("Temperatura: ");
	scanf("%d",&tm);
	do
	{
		if(pm!=enter)
		printf("Padavine (D/N): ");
		scanf("%c",&pm);
		if(pm!='d' && pm!='D' && pm!='n' && pm!='N' && pm!='\n') printf("Pogresan unos.\n");
	
	}
	while(pm!='d' && pm!='D' && pm!='n' && pm!='N');
	printf("Unesite prognozu za Bihac:\n");
	printf("Temperatura: ");
	scanf("%d",&tb);
	do
	{
		if(pb!=enter)
		printf("Padavine (D/N): ");
		scanf("%c",&pb);
		if(pb!='d' && pb!='D' && pb!='n' && pb!='N'&& pb!='\n') printf("Pogresan unos.\n");
	}
	while(pb!='d' && pb!='D' && pb!='n' && pb!='N');
	if(((pm=='n' || pm=='N')&&((tm>=-5 &&tm<5)||(tm>20 && tm<=30))) && (ps=='d'|| ps=='D'|| pb=='d'|| pb=='D'|| ts>30 
	|| ts<-5 || (ps>=5 && ps<=20) || tb>30 || tb<-5 || (pb>=5 && pb<=20)))
	{
		printf("Drugarice idu u Mostar.");
		return 0;
	}
	else if(((pb=='n' || pb=='N')&&((tb>=-5 &&tb<5)||(tb>20 && tb<=30))) && (ps=='d'|| ps=='D'|| pm=='d'|| pm=='D'|| ts>30 
	|| ts<-5 || (ps>=5 && ps<=20) || tm>30 || tm<-5 || (pm>=5 && pm<=20)))
	{
		printf("Drugarice idu u Bihac.");
		return 0;
	}
	else if (((ps=='n' || ps=='N'))&&((ts>=-5 &&ts<5)||(ts>20 && ts<=30)))
	{
		printf("Drugarice idu u Sarajevo.");
	    return 0;
	}
	else if(((ps=='d'|| ps=='D')&& (ts>=-5 && ts<=0))||((ps=='n'|| ps=='N') && (ts<=30 && ts>=-5)))
	{
		printf("Anja i Elma mogu u Sarajevo.");
		return 0;
	}
	else if((ps=='n' || ps=='N') && (ts>20||ts<5))
	{
		printf("Anja i Una mogu u Sarajevo.");
		return 0;
	}
	else if((ps=='n' || ps=='N')&& ((ts>20 && ts<=30)||(ts>=-5 && ts<5)))
	{
		printf("Elma i Una mogu u Sarajevo.");
		return 0;
	}
	else if(((pm=='d'|| pm=='D')&& (tm>=-5 && tm<=0))||((pm=='n'|| pm=='N')&&(tm<=30 && tm>-5)))
	{
		printf("Anja i Elma mogu u Mostar.");
		return 0;
	}
	
	else if((pm=='n' || pm=='N') && (tm>20 || tm<5))
	{
		printf("Anja i Una mogu u Mostar.");
		return 0;
	}
	else if((pm=='n' || pm=='N')&& ((tm>20 && tm<=30)||(tm>=-5 && tm<5)))
	{
		printf("Elma i Una mogu u Mostar.");
		return 0;
	}
	else if (((pb=='d'|| pb=='D')&& (tb>=-5 && tb<=0))||((pb=='n'|| pb=='N')&& (tb<=30 && tb>-5)))
	{
		printf("Anja i Elma mogu u Bihac.");
		return 0;
	}
	
	else if((pb=='n' || pb=='N') && (tb>20||tb<5))
	{
		printf("Anja i Una mogu u Bihac.");
		return 0;
	}
	
	
	else if((pb=='n' || pb=='N')&& ((tb>20 && tb<=30)||(tb>=-5 && tb<5)))
	{
		printf("Elma i Una mogu u Bihac.");
		return 0;
	}
	else printf("Ne odgovara niti jedan grad.");
	return 0;
}
