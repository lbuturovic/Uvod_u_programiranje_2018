#include <stdio.h>
int prva_rijec(char *s)
{
	char*p=s;
	int br=0;
	if(*p!=' ') br=1;
	while(*s!='\0')
	{
		if(*s==' ' && (*(s+1)!=' ' && *(s+1)!='\0')) br++;
		s++;
	}
	s=p;
	while(*s!='\0')
	{
		if(*s!=' ' && *(s+1)==' ') {
			*(s+1)='\0';
			break;
			}
		s++;	
	}
	
	return br;
	
}

int main() {
	printf("Tutorijal 9, Zadatak 5");
	return 0;
}
