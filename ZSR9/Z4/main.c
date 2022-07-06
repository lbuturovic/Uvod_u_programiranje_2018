#include <stdio.h>
void unesi(char niz[], int velicina)
{
    char znak = getchar();
    if (znak == '\n') znak=getchar();
    int i = 0;
    while (i < velicina-1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\0';
}
int Da_li_je_razmak(char* s)
{
	
	if(*s==' ') return 1;
	
	return 0;
}
char* izbaci_viska_razmake(char* s){
	char* poc=s;
	char* vrati=s;
	int prvi;
	while(*s!='\0')
	{
		char* p=s;
		
		if(Da_li_je_razmak(s)==1)
		{
			p=s;
		 	s=s+1;
		 	if(*poc==' ') s=s-1;
			vrati=s;
			while(Da_li_je_razmak(p) && p!='\0')
			p++;
			while(*p!='\0')
			{
				*s=*p;
				s++;
				p++;
			}
			*s='\0';
			s=vrati;
		}
		
		
		
		
		s++;
	}
	
	char*p=poc;
	if(*p=='\0') return poc;
	while(*p!='\0')
	p++;
	p--;
	if(*p==' ' && p!=poc) *p='\0';
	
	return poc;
	
	
}
int main() {
	char niz[100];
	printf("Unesite neki tekst: ");
	unesi(niz,100);
	izbaci_viska_razmake(niz);
	printf("%s",niz);
	return 0;

}
