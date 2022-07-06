#include <stdio.h>
char* tritacke(char *s)
{
	char*poc=s;
	while(*s!='\0'){
		if(*s!=' ')
		{
			char*p=s;
			int br=0;
			while(*p!='\0' && *p!=' ' )
			{
				p++;
				br++;
			}
			
			if(br>=10)
			{
				s=s+3;
				*s='.';
				s++;
				char* vrati=s;
				while(*p!='\0')
				{
					*s=*p;
					s++;
					p++;
				}
				*s='\0';
				s=vrati;
			}
		}
		
		
		
		
		s++;
	}
	
	return poc;
}

int main() {
	printf("Tutorijal 10, Zadatak 6");
	return 0;
}
