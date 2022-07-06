#include <stdio.h>
char* ukloni(char*s)
{
	char* poc=s;
	char* p;
	while(*s!='\0') {
		if(*s=='/')
			if(*(s+1)=='/') {
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
				if(*s=='\0') break;
				*s='\0';
				s=vrati;
			}


		s++;

	}



	return poc;


}
char* ukloni_komentare(char* s)
{
	char* poc=s;
	char* p;
	char* g;
	while(*s!='\0') {
		if(*s=='/')
			if(*(s+1)=='*') {
				p=s+2;
				g=s;
				if(*p=='\0') break;
					/*printf("-%c\n",*p);*/
        
				while(*p!='\0' && *p!='/') {
					p++;

				}
				if(*(p-1)=='*') {
					p=p+1;
					char* vrati=s;
					while(*p!='\0') {
						*s=*p;
						p++;
						s++;
					}
					if(*s=='\0') break;
					*s='\0';
					s=vrati;
				}
				else if(*(p-1)!='*')
				{
					while(*p!='\0' && *p!='/')
				p++;
				
				}
			}
		s++;
	}
	s=poc;
	ukloni(poc);



	return poc;


}
int main()
{
	char kod[] = "aa*/****/*/**/*/*/*/bb";
printf("%s", ukloni_komentare(kod));
	return 0;
}
