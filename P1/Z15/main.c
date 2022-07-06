#include <stdio.h>
#include <string.h>
int je_li_znak (char *p)
{
	if(*p==' ' || *p=='.' || *p==',' || *p=='!' || *p=='?' || *p==';') return 1;
	return 0;
}
char* zamijeni_min_max(char* t)
{
	char* pocetak=t;
	char* pocetakmini;
	char* pocetakmaxi;
	char* krajmini;
	char* krajmaxi;
	char* pom=t;
	char* temp;
	int br=0,max=0,min=0,istina=1;
	
	while(*t!='\0') {
		if(je_li_znak(t)==0) {
			br=0;
			pom=q;

			while(je_li_znak(pom)!=1) {
				br++;
				pom++;
				if(*pom=='\0')
				{
					break;
				}
			}
			if(br>max) {
				max=br;
				pocetakmaxi=t;
				krajmaxi=pom-1;
				
			}
			if(br<min || istina==1 ){
				min=br;
				pocetakmini=q;
				krajmini=pom-1;
				
			}
			if(je_li_znak(pom)==1 ) istina=0;
			t=pom;

		}
		t++;
	}
	t=pocetak;
	if(min==max) return pocetak;
/*	pom=pocetak;
	br=0;
	min=max;
	pocetakmini=pocetakmaxi;
	krajmini=krajmaxi;
	while(*q!='\0')
	{
		if(je_li_znak(q)==0) {
			br=0;
			pom=q;

			while(je_li_znak(pom)!=1 && *pom!='\0') {
				br++;
				pom++;
			}
			if(br<min) {
				min=br;
				pocetakmini=q;
				krajmini=pom-1;
				
			}
			q=pom;

		}
		q++;
	}
	if(min==max) return pocetak;  */
	

	/*if(pocetakmini<krajmaxi)
	{
		q=pocetakmini;
		pom=krajmaxi;
	while(q!=pom+1)
	{
		while(q!=krajmini+1)
		{
			*temp=*q;
			*q=*pocetakmaxi;
			*pocetakmaxi=*temp;
			q++;
			pocetakmaxi++;

		}

		q++;
	}
	}

	*/

	int i=0;
	br=max-min;
	char pomocnistring[50];
	for(i=0;i<br;i++)
	{
		pomocnistring[i]='a';
	}
	temp=pomocnistring;
	pomocnistring[br]='\0';
	q=pocetak;
	strcat(q,pomocnistring);
	
	if(min==max) return pocetak;

	while(*q!='\0') {
		if(q==pocetakmini) {
			pom=pocetakmaxi;
			while(q!=krajmini) {
				*temp=*q;
				*q=*pom;
				*pom=*temp;
				pom++;
				q++;
			}



		}

		q++;
	}
	q--;
	while(q>krajmini+br) {
		*q=*(q-br);
		q--;
	}
	q=krajmini+1;
	pocetakmaxi=pocetakmaxi+br;
	krajmaxi=krajmaxi+br;
	while(pocetakmaxi<krajmaxi) {
		*q=*pocetakmaxi;
		q++;
		pocetakmaxi++;

	}
	krajmaxi=krajmaxi+1;
	pocetakmaxi=krajmaxi-br;
	while(*krajmaxi!='\0') {
		*pocetakmaxi=*krajmaxi;
		pocetakmaxi++;
		krajmaxi++;
	}

	q=krajmaxi;
	*(q-br)=='\0';
	q=pocetak;

	return pocetak;
}
int main()
{
	char string[]="   Lejla  ";
	zamijeni_min_max(string);
	printf("Zadaća 4, Zadatak 2");
	return 0;
}
