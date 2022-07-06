#include <stdio.h>
#include <string.h>
int je_li_znak (char *p)
{
	if(*p==' ' || *p=='.' || *p==',' || *p=='!' || *p=='?' || *p==';') return 1;
	return 0;
}
int main()
{
	
	
	char* pocetakmini;
	char* pocetakmaxi;
	char* krajmini;
	char* krajmaxi;
	char* pom;
	char* temp;
	int br=0,max=0,min=0;
	char q[]="    lejla ";
	char* pocetak=q;
	if(!(je_li_znak(q))) {
		pom=q;
		while(je_li_znak(pom)==0) {
			br++;
			pom++;
			if(*pom=='\0') break;
		}
		max=br;
		min=br;
	}
	printf("min %d max %d",min,max);

	return 0; }