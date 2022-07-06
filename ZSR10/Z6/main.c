
#include <stdio.h>
#include <string.h>

char *podstring (  char *str1,  const char *str2, int cs)
{
	char *s1;
	const  char *s2;
	while (*str1!='\0') {
		s1=str1;
		s2=str2;
		if (cs==0) {
			while (*s1==*s2 || *s1==*s2-32 || *s1==*s2+32) {
				s1++;
				s2++;
				if (*s2=='\0') return str1;
			}
			str1++;
		} else {
			while (*s1==*s2) {
				s1++;
				s2++;
				if (*s2=='\0') return str1;
			}
			str1++;
		}
	}
	return NULL;
}
void upisi (char *s, const  char *str)
{
	while (*str!='\0') {
		*s=*str;
		s++;
		str++;
	}
}
void zamijeni_ubaci (char *str, const char *sta, const char *sa_cim, int cs, int pomak)
{
	char *s=str;
	char *pozicija;
	char *kraj;
	/*	pozicija=strstr(s,sta);*/
	pozicija=podstring (s,sta,cs);
	while (pozicija) {                              /*strstr vraca null pokazivac*/
		kraj=pozicija;
		while (*kraj!='\0') kraj++;
		*(kraj+pomak)='\0';
		kraj--;
		/*	printf ("%s\n",str);*/
		while (kraj>pozicija) {
			*(kraj+pomak)=*kraj;
			kraj--;
		}
		/*printf ("%s\n",str);*/
		/*strcpy(pozicija, sa_cim);*/
		upisi (pozicija, sa_cim);
		/*printf ("%s\n",str);*/
		/*pozicija=strstr(s,sta);*/
		pozicija=podstring(s,sta,cs);
	}

}
void zamijeni_izbaci (char *str, const char *sta, const char *sa_cim, int cs, int pomak)
{
	char *pozicija;
	char *s=str;
	char *pocetak;
	char *kraj;
	pozicija=strstr(s,sta);
	while (pozicija) {
		pocetak=pozicija;
		kraj=pozicija+pomak;
		while (*kraj!='\0') {
			*pocetak=*kraj;
			pocetak++;
			kraj++;
		}
		*pocetak='\0';
		upisi (pozicija,sa_cim);
		pozicija=strstr(s,sta);
	}
}
char *ZamijeniTekst (char *str, const char *sta, const char *sa_cim, int cs)
{
	char *p=str;
	int pomak;
	pomak=strlen (sa_cim)-strlen(sta);
	if (pomak>0)
		zamijeni_ubaci(str, sta, sa_cim, cs, pomak);
	else zamijeni_izbaci (str, sta, sa_cim, cs, -pomak);
	return p;
}
int main()
{
	printf("ZSR 10, Zadatak 6");
	return 0;
}
