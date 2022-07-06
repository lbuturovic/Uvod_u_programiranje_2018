
#include <stdio.h>
char* ukloni_komentare(char* s)
{
	char* poc=s;
	char* p;
	while(*s!='\0') {
		if(*s=='/') {
			if(*(s+1)=='*') {
				p=s+2;

				while(*p!='\0' && *p!='*') {
					p++;

				}
				if(*(p+1)=='/') {
					p=p+2;
					char* vrati=s;
					while(*p!='\0') {
						*s=*p;
						p++;
						s++;
					}
					*s='\0';
					s=vrati;
				}
			} else if(*(s+1)=='/') {

				p=s+2;

				while(*p!='\0' && *p!='\n') {
					p++;

				}
				char* vrati=s;
				while(*p!='\0') {
					*s=*p;
					p++;
					s++;
				}
				*s='\0';
				s=vrati;
			}
		}



	s++;


}


	return poc;


}
