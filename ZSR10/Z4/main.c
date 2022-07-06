#include <stdio.h>
// izbaci tekst
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
char* IzbaciTekst(char* Str, const char* tekst, int cs){
	if(*tekst=='\0') return Str;
	int istina=0;
	char* poc=Str;
	char* s=Str;
	
	while(*s!='\0')
	{
		istina=0;
		char* p=s;
		const char* q=tekst;
		if (cs==1){
		while(*p++==*q++)
		if(*q=='\0')
		{
			char* p1=s;
			char* k1=p;
			while(*k1!='\0')
			{
				*p1=*k1;
				p1++;
				k1++;
			}
			*p1='\0';
			s=Str;
			istina=1;
		} 
		 } else if(cs==0)
		 {
		while(Da_li_Su_Ista_Slova(p,q) && *p!='\0' && *q!='\0')
		{
			p++;
			q++;
		}
		if(*q=='\0')
		{
			char* p1=s;
			char* k1=p;
			while(*k1!='\0')
			{
				*p1=*k1;
				p1++;
				k1++;
			}
			*p1='\0';
			s=Str;
			istina=1;
		} 
		 	
		 	
		 	
		 }
			
		
		
		if(istina==0) s++;
	}
	
	
	
	
	return Str;
	
}
int main() {
	char A[100];
	char B[100];
	printf("unesi string: ");
	unesi (A,100);
	printf ("Unesi rijec koju izbcujemo: ");
	unesi (B,50);
	int m=0;
	printf ("Nakon izbacivanja: %s",IzbaciTekst(A,B,m));
	return 0;
}
