#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void unesi (char niz[],int velicina)
{
	char znak=getchar();
	if (znak=='\n')
	znak=getchar();
	int i=0;
	while(i<velicina-1 && znak!='\n')
	{
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
	
}
int je_li_slovo(char* p) {
	
	if(*p!='?' && *p!='!' && *p!='.' && *p!=';' && *p!=',' && *p!=' ') return 1;
	return 0;
	
}
char* zamijeni_min_max(char* p){
	char* pocetak=p;
	char* pocetakmini=p;
	char* krajmaxi=p;
	char* krajmini=p;
	char* pocetakmaxi=p;
	char* q=p;
	char* pom=p;
	
	char* pomocni;
	char* pocetak_pomocni;
	int br=0;
	int vel;
	vel=strlen(p);
	int istina=1,max=0,min=0;
	while(*p!='\0')
	{
		if(je_li_slovo(p)==1)
		{
			br=0;
			 pom=p;
			while(*pom!='\0' && je_li_slovo(pom)==1)
			{
				br++;
				pom++;
			}
			if(istina==1)
			{
				min=br;
			   pocetakmini=p;
			   istina++;
			}
			if(br<min)
			{
				min=br;
				pocetakmini=p;
			}
			if(br>max)
			{
			   pocetakmaxi=p;
				max=br;
			}

			p=pom;
			
		}
		
		
		p++;
	}
	if(min==max) {
		return pocetak;
		}
	p=pocetak;
	int duzina=strlen(p);
	krajmaxi=pocetakmaxi+max;
	krajmini=pocetakmini+min;
	pomocni=malloc(duzina*sizeof(char));
	int i=0;
/*	while(*p!='\0')
	{
		pomocni[i]=*p;
		p++;
		i++;
	}
	pomocni[i]='\0'; */
	p=pocetak;
	i=0;
	char* pocetakminiorg=pocetakmini;
	char* pocetakmaxiorg=pocetakmaxi;
	while(*p!='\0' && i!=duzina)
	{

		if(p==pocetakminiorg)
		{
			p=pocetakmaxi;
			while(pocetakmaxi<krajmaxi)
			{
				pomocni[i]=*pocetakmaxi;
				i++;
				pocetakmaxi++;
				istina=1;
			}
			
			p=krajmini;
			continue;
		}
		else if(p==pocetakmaxiorg)
		{
			
			while(pocetakmini<krajmini)
			{
				pomocni[i]=*pocetakmini;
				i++;
				pocetakmini++;
				istina=1;
			}
			p=krajmaxi;
			
			continue;
			
		}
		else
		{
		pomocni[i]=*p;
		i++;
		p++;
		
		}
	}
	pomocni[duzina]='\0';
	p=pocetak;
	i=0;
	while(pomocni[i]!='\0')
	{
		*p=pomocni[i];
		p++;
		i++;
		
	}
	*p='\0';
	p=pocetak;
	free(pomocni);
	
	

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