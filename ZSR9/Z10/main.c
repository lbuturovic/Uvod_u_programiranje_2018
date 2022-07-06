#include <stdio.h>
int GenerisiTablice(const char *prethodna, char* nova){
	const char* s=prethodna;
	const char* k=prethodna;
	int tmp[9];
	int i=0;
	while(*s!='\0')
	{
		s++;
	}
	k=s-1;
	s=prethodna;
	while(*s!='\0')
	{
		if(*s>='0' && *s<='9' )
		{
			tmp[i]=*s-'0';
	
		}
		
		
		
		i++;
		s++;
	}
	s=prethodna+6;
	int broj=0;
	while(*s!='\0')
		{
			broj=broj*10+*s-'0';
			s++;
		}
	if(broj==1000) A, E, J, K, M, O, T,
	{
		if(*(s+5)=='A') nova[5]='E';
		if(*(s+5)=='E') nova[5]='J';
		if(*(s+5)=='J') nova[5]='K';
		if(*(s+5)=='K') nova[5]='M';
		if(*(s+5)=='M') nova[5]='O';
		if(*(s+5)=='O') nova[5]='T';
		
	}
	
	
	
	
}
int main() {
	printf("ZSR 9, Zadatak 10");
	return 0;
}
