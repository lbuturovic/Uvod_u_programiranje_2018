#include <stdio.h>
#include <string.h>
#include <ctype.h>
void unesi( char niz[], int velicina)
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
void upisi (char *s, const  char *str)
{
	while (*str!='\0') {
		*s=*str;
		s++;
		str++;
	}
}

char *podstring (  char *str1,  const char *str2)                                       
{
	char *s1;
	char *ss1=str1;
	const  char *s2;
	while (*str1!='\0') {
		s1=str1;
		s2=str2;
		
			while ( tolower(*s1)==tolower(*s2)) {                                       /**s1==*s2 || *s1==*s2-32 || *s1==*s2+32*/
				s1++;
				s2++;
				if (str1==ss1)
				{
				if (*s2=='\0' && !((*s1 >='A' && *s1<='Z') || (*s1 >='a' && *s1 <='z'))) return str1;
				}
				else
				if (*s2=='\0' && !((*s1 >='A' && *s1<='Z') || (*s1 >='a' && *s1 <='z')) && !((*(str1-1) >='A' && *(str1-1)<='Z') || (*(str1-1) >='a' && *(str1-1) <='z'))) return str1;
			}
			str1++;
		 
	}
	return NULL;
}
void zamijeni_izbaci (char *str, char *zab, int pomak)
{
	char *pozicija;
	char *pocetak;
	char *kraj;
	
	/*printf ("zab je %s  ", zab);*/
	
	
	pozicija=podstring (str,zab);
/*	printf ("pozicija je %c  ", *pozicija);*/
	while (pozicija)
	{
		pocetak=pozicija;
		kraj=pozicija+pomak;
		while (*kraj!='\0')
		{
			*pocetak=*kraj;
			pocetak++;
			kraj++;
			
		}
		*pocetak='\0';
	/*	printf ("%s\n",str);*/
		upisi(pozicija,"***");
		pozicija=podstring(str,zab);
	}
	
}

void zamijeni_ubaci (char *str, char *zab, int pomak)
{
	char *pozicija;
	char *kraj;
	
	
	
	pozicija=podstring (str,zab);
	while (pozicija)
	{
		kraj=pozicija;
		while (*kraj!='\0') kraj++;
		while (kraj>pozicija)
		{
			*(kraj+pomak)=*kraj;
			kraj--;
		}
		upisi(pozicija, "***");
		pozicija=podstring (str, zab);
	}
	
}
void cenzura (char *str, char *zabranjene)
{
	char *s=str;
	int i=0, j=0;
	char zab [20][20];
	int brzab;
	
	
	
	
	while (*zabranjene!='\0')
	{
		zab[i][j]=*zabranjene;
		j++;
		zabranjene++;
		if (*zabranjene==' ' || *zabranjene=='\0')
	{
		zab[i][j]='\0';
			i++;
			
			j=0;
			if (*zabranjene!='\0')
			zabranjene++;
		
	}
	}
	brzab=i;
	
/*	for (i=0;i<brzab;i++)
	{
	printf ("%s\n",zab[i]);
	/*printf ("strlen je %d\n",strlen(zab[i]));
	}*/
	int pomak;
	
	for (i=0; i<brzab; i++)
	{
		pomak=strlen("***")-strlen (zab[i]);
		/*printf ("strlen je %d  ",strlen(zab[i]));
		printf ("pomak je %d\n",pomak);*/
		if (pomak<0)
		zamijeni_izbaci(str,zab[i],-pomak);
		else zamijeni_ubaci(str,zab[i],pomak);
	}
	
	
	
	

}
int main() {
	char __cenzura[20]="je teksta cenzurise";
char __tekst[100]="Ovo je neki primjer teksta koji se cenzurise." ;
printf ("Unesite tekst za cenzuru: ");
unesi (__tekst,100);
printf ("Unesite zabranjene rijeci razdvojene razmakom: ");
unesi (__cenzura,20);
printf ("Cenzurisani tekst glasi: ");
cenzura(__tekst,__cenzura);
printf("%s",__tekst);


	return 0;
}
