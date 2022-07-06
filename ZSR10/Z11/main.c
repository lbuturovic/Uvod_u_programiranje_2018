#include <stdio.h>
#include <math.h>
int duzina (char *s)
{
	int duz=0;
	while (*s!='\0')
	{
		duz++;
		s++;
	}
	return duz;
}
char *podstring (  char *str1,   char *str2)
{
    char *s1;
      char *s2;
    while (*str1!='\0') {
        s1=str1;
        s2=str2;


        while (*s1==*s2) {
            s1++;
            s2++;
            if (*s2=='\0') return str1;
        }
        str1++;

    }
    return NULL;
}
void izbaci (char *s, char *sta)
{
	char *pozicija;
	char *pocetak;
	char *kraj;
	pozicija=podstring (s,sta);
	while (pozicija)
	{
		pocetak=pozicija;
		kraj=pozicija + duzina(sta);
		while (*kraj!='\0')
		{
			*pocetak=*kraj;
			pocetak++;
			kraj++;
		}
		*pocetak ='\0';
		pozicija=podstring (s,sta);
	}
	
	
}
char* izbaci_maxbroj (char *s)
{
	char *s1=s;
	char *s2=s;
	char *pocetak;
	char *kraj;
	int brcifara, brcifaramax=0;
	int broj;
	int i=0;
	int predznak=1;
	int imabroja=0;
	int maxbroj=-20000;
	while (*s1!='\0')
	{
		broj=0;
		brcifara=0;
		if (*s1=='-')
		{
		predznak=-1;
		s1++;
		}
		while (*s1>='0' && *s1<='9')
		{
			broj=broj*10 + *s1-'0';
			brcifara++;
			imabroja=1;
			s1++;
			i++;
		}
		broj=broj*predznak;
		/*printf ("broj je %d\n", broj);*/
		if (imabroja==1)
		{
		if (broj>maxbroj)
		{
			maxbroj=broj;
			brcifaramax=brcifara;
		}
		}
		if (broj==0 && imabroja==0)
		{
			s1++;
		}
		imabroja=0;
	}
	

/*	printf ("max broj je %d\n",maxbroj);*/
	
	// prebacivanje broja u string
	// okretanje broja naopako
	
	int broj1=maxbroj;
	
	char smaxbroj[12];
	char *smax=smaxbroj;
	char *smax1=smax;
	if (maxbroj<0)
	{
		maxbroj=-maxbroj;
		*smax='-';
		smax++;
	}
	
	// okretanje
	int broj3=0;
	int c;
	int broj2=maxbroj;
	do
	{
		c=broj2%10;
		broj3=broj3*10+c;
		broj2=broj2/10;
	} while (broj2>0);
	
	// br cifara naopakog
	int br_cifaran=0;
	int broj4=broj3;
	
	do
	{
		broj4=broj4/10;
		br_cifaran++;
	} while (broj4>0);
	
/*	if (brcifaramax>br_cifaran)
	{
		for (i=0;i<brcifaramax-br_cifaran;i++)
		{
			*smax='0';
			smax++;
		}
	}*/
	//printf ("broj naopako je %d\n",broj3);
   //	printf ("broj je %s\n", smax1);
	
	
	
	do
	{
		c=broj3%10;
		*smax=c+'0';
		smax++;
		broj3=broj3/10;
	} while (broj3>0);
	
	
	if (brcifaramax>br_cifaran)
	{
		for (i=0;i<brcifaramax-br_cifaran;i++)
		{
			*smax='0';
			smax++;
		}
	}
	*smax='\0';
	
	
	//printf ("broj naopako je %d\n",broj3);
	// printf ("broj je %s\n", smax1);
	
	izbaci(s,smax1);
	
	return s;
}
int main() {
	
	return 0;
}
