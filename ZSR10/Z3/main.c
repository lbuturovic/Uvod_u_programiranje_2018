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
char* IzbaciTekst(char* Str, const char* tekst){
	int istina=0;
	char* poc=Str;
	char* s=Str;
	
	while(*s!='\0')
	{
		istina=0;
		char* p=s;
		const char* q=tekst;
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
			
		
		
		if(istina==0) s++;
	}
	
	
	
	
	return Str;
	
}


/*#include <stdio.h>
// zsr 10 zad 3
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
char *IzbaciTekst (char *s, const char *t) {
	char*pocetak=s;
	int istina,i=0;
	while (*t!='\0') {
		t++;
		i++;
	}
	int vel=i;
	t=t-vel;
	for (i=0;i<3;i++) {
	while (*s!='\0') {
		if (*s==*t) {
			char*m=s;
			istina=0;
			while (*m==*t) {
				m++;
				t++;
				istina++;
			}
			t=t-istina;
			m=m-istina;
			if (istina>=vel) {
				while (*m!='\0') {
					*m=*(m+vel);
					m++;
					if (*m=='\0')
						break;
						if (*(m+vel)=='\0')
							break;
				}
				*m='\0';
			}
		}
		else 
			s++;
	}
	}
	return pocetak;
}*/


int main() {
	char A[100];
	char B[100];
	printf("unesi string: ");
	unesi (A,100);
	printf ("Unesi rijec koju izbcujemo: ");
	unesi (B,50);
	printf ("Nakon izbacivanja: %s",IzbaciTekst(A,B));
	return 0;
}
