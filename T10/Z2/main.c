#include <stdio.h>
char* rot13(char*s){
char* poc=s;
 while(*s!='\0')
 {
     if(*s>='A'&& *s<='M') *s=*s+13;
     else if(*s>='a' && *s<='m') *s=*s+13;
     else if(*s>='N' && *s<='Z') *s='A'+12-('Z'-(*s));
     else if(*s>='n' && *s<='z') *s='a'+12-('z'-(*s));
     
     
     s++;
 }

return poc;
}

int main() {
	
	return 0;
}
