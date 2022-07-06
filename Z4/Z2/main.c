#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void unesi (char niz[],int velicina)
{
	char znak=getchar();
	if (znak=='\n')
		znak=getchar();
	int i=0;
	while(i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';

}
int je_li_slovo(char* p) /*funkcija provjerava je li slovo u pitanju, tj. znakovi koji se smatraju dijelom rijeci*/
{

	if(*p!='?' && *p!='!' && *p!='.' && *p!=';' && *p!=',' && *p!=' ') return 1;
	return 0;

}
char* zamijeni_min_max(char* p)
{
	char* pocetak=p;
	char* pocetakmini=p;
	char* krajmaxi=p;
	char* krajmini=p;
	char* pocetakmaxi=p;
	char* pom=p;
	char* pomocni;
	int br=0;
	int vel;

	int istina=1,max=0,min=0;
	while(*p!='\0' && *pom!='\0') {
		if(je_li_slovo(p)==1) { 
			br=0;
			pom=p;
			while(*pom!='\0' && je_li_slovo(pom)==1) {
				br++;
				pom++;
			}
			if(istina==1) { /*istina nam daje informaciju o broju rijeci i ukoliko je prva rijec onda ce minimum postati broj slova prve rijeci*/
				min=br;
				pocetakmini=p; /*pokazivac na najmanju rijec*/
				istina++; /*istina nikad vise nece biti 1 nakon prve rijeci*/
			}
			if(br<min) {
				min=br; /*ako je broj znakova u rijeci manji od minimuma novi min je taj broj*/
				pocetakmini=p; /*postavlja se novi pokazivac na pocetak prve rijeci*/
			}
			if(br>max) {
				pocetakmaxi=p; /*analogno minimumu trazi se max i postavlja se pokazivac*/
				max=br;
			}

			p=pom;

		}

		if(*p=='\0') break;
		p++;
	}
	
	if(min==max) {
		return pocetak; /*ukoliko su sve rijeci iste duzine vraca se pokazivac na pocetak stringa*/
	}
	p=pocetak;
	krajmaxi=pocetakmaxi+max; /*kraj rijeci iza kraja maksimuma*/
	krajmini=pocetakmini+min;/*iza kraja minimuma*/
    int i=0;
	int duzina=strlen(pocetak);
	pomocni=malloc((duzina+2)*sizeof(char)); /*pomocni string u koji se kopira originalni*/
	
	p=pocetak;
	i=0;
	char* pocetakminiorg=pocetakmini; /*potrebno je osigurati da pokazivac na min rijec bude const*/
	char* pocetakmaxiorg=pocetakmaxi;/*potrebno je osigurati da pokazivac na max rijec bude const*/
	while(*p!='\0' && i!=duzina) { /*dok ne dodje do kraja originala i klona*/

		if(p==pocetakminiorg) { /*pokazivac prolazi kroz originalni string i kad doje na pocetak minimalne rijeci postavlja se na maksimalnu i vrsi se kopiranje u klon string*/
			p=pocetakmaxi;
			while(pocetakmaxi<krajmaxi) {
				pomocni[i]=*pocetakmaxi;
				i++;
				pocetakmaxi++;
				istina=1;
			}

			p=krajmini; /*pokazivac se vraca iza minimalne rijeci*/
			
		} else if(p==pocetakmaxiorg) { /*ukoliko dodje do pocetakmax rijeci kopira minimalnu rijec*/

			while(pocetakmini<krajmini) {
				pomocni[i]=*pocetakmini;
				i++;
				pocetakmini++;
				istina=1;
			}
			p=krajmaxi;

			

		} else { /*u suprotnom kopira ostatak stringa tj ne vrsi nikakvu zamjenu*/
			pomocni[i]=*p;
			i++;
			p++;

		}
	}
	pomocni[i]='\0';
	p=pocetak;
	i=0;
	while(pomocni[i]!='\0') { /*u originalni string se upisuje pocetni*/
		*p=pomocni[i];
		p++;
		i++;

	}
	*p='\0';
	p=pocetak; /*pokazivac se vraca na pocetak*/
	free(pomocni); /*oslobadja se memorija*/



	/*	int prostor;
		prostor=max-min;
		int i;
		for(i=0;i<prostor;i++)
		{
			pomocni[i]='A';
		}
		pomocni[i]='\0';
		char* s2=&pomocni[0];
		p--;
		if(pocetakmini<pocetakmaxi)
		{

		/*	while(*s2!='\0'){
				*p=*s2;
				p++;
				s2++;
			}
			*p='\0'; */
	/*	p=pocetak;
		strcat(p,s2);
		pocetak=p;
		while(*p!='\0')
		p++;
		char* kraj=p-1;
		p=pocetakmini;
		pom=pocetakmaxi;
		char* krajmini=pocetakmini+min;
		while(p<krajmini)
		{
			*kraj=*p;
			*p=*pom;
			*pom=*kraj--;
			 pom++;
			 p++;
		}

		char* krajmaxi=pocetakmaxi+max;
		pom=pocetakmini+min-1;
		char* kraj2=kraj-prostor;
		kraj=pom;
		while(*kraj!='\0')
		kraj++;
		kraj--;
		pom=pom+prostor;
		while(kraj>pom)
		{
			*kraj=*(kraj-prostor);
			kraj--;
		}
		while(*kraj!='\0')
		kraj++;
		kraj=kraj-prostor;
		pom=pocetakmini+min;
		while(*kraj!='\0')
		{
			*pom=*kraj;
			kraj++;
			pom++;

		}
		*(kraj-prostor)='\0';
		p=pocetak;  */













	return pocetak;
}

int main()
{

	char a[100];
	printf("Unesi: ");
	unesi(a,100);
	zamijeni_min_max(a);
	printf("%s",a);
	return 0;
}

/*#include <string.h>
int je_li_znak (char *p)
{
	if(*p==' ' || *p=='.' || *p==',' || *p=='!' || *p=='?' || *p==';') return 1;
	return 0;
}
char* zamijeni_min_max(char* q)
{
	char* pocetak=q;
	char* pocetakmini;
	char* pocetakmaxi;
	char* pom=q;
	char* temp;
	int br=0,max=0,min=0,istina=1;

	while (*q!='\0'){
		if(je_li_znak(q)==0)
		{
			pom=q;
			br=0;
			while(*pom!='\0' && je_li_znak(pom)==0)
			{
				br++;
				pom++;

			}
			if(br>max) {
				max=br;
				pocetakmaxi=q;
			}
			if(istina==1) {
				min=br;
				pocetakmini=q;
				istina++;
			}
			if(br<min) {
				min=br;
				pocetakmini=q;
			}
			q=pom;

		}

		q++;
	}
	if(min==max) return pocetak;

/*	while(*q!='\0') {
		if(je_li_znak(q)==0) {
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
				pocetakmaxi=q;
				krajmaxi=pom-1;

			}
			if(br<min || istina==1 ){
				min=br;
				pocetakmini=q;
				krajmini=pom-1;

			}
			if(je_li_znak(pom)==1 ) istina=0;
			q=pom;

		}
		q++;
	}
	q=pocetak;
	if(min==max) return pocetak; */
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

/*
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
} */
