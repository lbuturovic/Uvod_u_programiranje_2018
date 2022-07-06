#include <stdio.h>
char* whitespace(char *s)
{
	char* poc=s;
	char* p;
	while(*s!='\0')
	{
		if(*s==' ' || *s=='\n' || *s=='\t'){
			*s=' ';
			p=s;
			while(*p!='\0' && (*p==' ' || *p=='\n' || *p=='\t'))
			{
				p++;
			}
			s++;
			if(*s=='\0') break;
			char* vrati=s;
			while(*p!='\0') {
				*s=*p;
				s++;
				p++;
				
			}
			*s='\0';
			s=vrati;
		}
		
	s++;	
	}
	if(*(s-3)==' ') *(s-3)='\0';
	if(*poc==' ')
    poc=poc+1;
	
	
	return poc;
}

	    
	    
	    
	   
	    
	   


int main() {
		  

	return 0;
}
