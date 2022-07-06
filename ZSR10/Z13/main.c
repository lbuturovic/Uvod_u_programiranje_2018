#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *podstring (  char *str1,  const char *str2)                                       
{
	char *s1;
	char *ss1=str1;
	const  char *s2;
	while (*str1!='\0') {
		s1=str1;
		s2=str2;
		
			while ( tolower(*s1)==tolower(*s2)) {                                       
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

char *izbaci_najcescu (char*s)
{
	char *p=s;
	char rijeci[30][20];
	
	char *s1=s;
	
	char *s2=s;
	int i=0,j,k;
	int br_rijeci;
	char *s3;
	char *pozicija;
	
	
	int a;
	
	
	while (*s1!='\0')
	{
		j=0;
		a=0;
		while ((*s1 >='A' && *s1<='Z') || (*s1 >='a' && *s1 <='z'))
		{
			rijeci[i][j]=*s1;
			j++;
			s1++;
			a=1;
		}
		rijeci[i][j]='\0';
		if (*s1!='\0')
		s1++;
		if (a==1)
		i++;	
		
	}
	br_rijeci=i;
	int max=0;
	int maxi=0;
	int br;
	if (br_rijeci==0) return p;
	for (i=0;i<br_rijeci;i++)
	{
		pozicija=podstring (s,rijeci[i]);
		br=0;
		while (pozicija)
		{
			s3=pozicija+strlen(rijeci[i]);
			pozicija=podstring(s3,rijeci[i]);
			br++;
			
		}
		if (br>max)
		{
		max=br;
		maxi=i;
		}
	}
	
	
	
	char *pocetak;
	char *kraj;
	pozicija=podstring (s,rijeci[maxi]);
	while (pozicija)
	{
		pocetak=pozicija;
		kraj=pozicija+strlen(rijeci[maxi]);
		while (*kraj!='\0')
		{
			*pocetak=*kraj;
			pocetak++;
			kraj++;
		}
		*pocetak='\0';
		pozicija=podstring(pozicija,rijeci[maxi]);
	}
	
	
	
	
	return p;
}
int main() {
	printf("ZSR 10, Zadatak 13");
	return 0;
}
