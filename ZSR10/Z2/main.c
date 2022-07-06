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
int Da_li_Su_Ista_Slova(const char*s, const char* q)
{
	int temp1,temp2;
	temp1=*s;
	temp2=*q;
	if(temp1>='a' && temp1<='z') temp1=temp1-32;
	if(temp2>='a' && temp2<='z') temp2=temp2-32;
	if(temp1==temp2) return 1;
	return 0;
}

int PronadjiPosljednji(const char* s1, const char* s2){
	int indeks=-1;
	const char* poc=s1;
	const char* poc2=s2;
	while(*s1!='\0') {
		const char* p= s1;
		const char* q=s2;
		while(Da_li_Su_Ista_Slova(p,q) && *p!='\0' && *q!='\0')
		{
			p++;
			q++;
		}
		  if(*q == '\0')
		  {
		  	indeks=s1-poc;
		  	q=poc2;
		  }
		
		s1++;
	}
	
	return indeks;
	
}
int main() {
	char niz[100];
	char niz2[100];
	unesi(niz,100);
	unesi(niz2,100);
	
	printf ("%d", PronadjiPosljednji(niz,niz2));
	printf("ZSR 10, Zadatak 1");
	return 0;
}
