#include <stdio.h>
int Da_li_je_razmak(char* s)
{
	
	if(*s==' ') return 1;
	
	return 0;
}
char* PosljednjaRijec (char*s){
	
	char* p=s;
	char*k=s;
	while(*s!='\0')
	{
		s++;
	}
	k=s-1;
	s=p;
	int istina=0;
	while(k>=s && Da_li_je_razmak(k)==1)
	{istina=1;
	k--;}
	while(k>=s && Da_li_je_razmak(k)==0)
	
	k--;
	k++;
	
	s=k;
	while(Da_li_je_razmak(s)==0)
	s++;
	if(istina==1) *s='\0';
	return k;
	
	
}

int main() {
	printf("ZSR 9, Zadatak 1");
	return 0;
}
