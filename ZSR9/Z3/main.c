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
int Da_li_je_malo_slovo(char* s)
{
	
	if(*s>='a' && *s<='z') return 1;
	
	return 0;
}
char* velika(char* s){
	char* poc=s;
	
	while(*s!='\0')
	{
		if(Da_li_je_malo_slovo(s)==1)
		*s=*s-32;
		
		s++;
	}
	s=poc;
	
	return poc;
}
int main() {
	char niz[100];
	printf("Unesite neki tekst: ");
	unesi(niz,100);
	velika(niz);
	printf("%s",niz);
	return 0;

}
