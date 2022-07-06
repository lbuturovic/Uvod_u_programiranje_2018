#include <stdio.h>
char* dvostruko (char *s)
{

	char *s1,*p, *pocetak, *kraj;
	int broj, br_cifara=0, br_cifara1, br_cifara2, broj1,broj2, broj3, broj4, cifra,razlika=0;
	p=s;

	while (*s != '\0') {
		/*printf ("s je %c \n",*s);*/
		s1=s;
		broj=0;
		br_cifara1=0;
		/* printf ("sad je *s=%c ",*s);*/
		while (*s1 >='0' && *s1 <= '9') {
			/*printf ("*s1 je %c\n",*s1);*/
			broj=broj*10 + (*s1-'0');                         /*ascii vrijednost od s1*/
			s1++;
		}

		if ((broj==0 && s1!=s) || broj!=0) {
			broj1=broj;
			do {
				broj1=broj1/10;
				br_cifara1++;
			} while (broj1>0);
			/*printf ("broj cifara prvog je %d\n",br_cifara1);*/
			broj=broj*2;
			br_cifara=0;
			broj1=broj;
			broj2=broj;
			/*printf ("*s je %c ",*s);*/
			/*printf (" broj je %d  ", broj);*/
			/* if (broj!=0)
			return p;*/

			do {
				broj1=broj1/10;
				br_cifara++;
			} while (broj1>0);
			/*printf (" br cifara je %d ",br_cifara);*/
			/*printf (" pocetak je %c a kraj je %c \n",*s,*(s+br_cifara-1));*/
			razlika=s1-s;
			/*printf ("razlika je %d \n",razlika);*/
			/* razlika=br_cifara-br_cifara1;*/
			pocetak=s;             /*bilo s+1*/
			/* if (s1-s<br_cifara)             bilo
			   kraj=s+br_cifara -1;
			   else
			kraj=s+br_cifara; */
			/*	printf (" pocetak je %c  \n",*pocetak);*/
			kraj=s;
			while (*kraj!='\0')
				kraj++;

			pocetak=s;

			if (br_cifara<razlika) {
				/*	pocetak=s;
					kraj=s+razlika;*/
				pocetak=s+br_cifara;
				kraj=s+razlika;
				/*printf (" pocetak je %c a kraj je %c \n",*pocetak,*kraj);*/
				while (*kraj!='\0') {
					*pocetak=*kraj;
					pocetak++;
					kraj++;
				}
				*pocetak='\0';
				/*	printf ("'%s'  \n",p);*/
				kraj=s;

				/*printf ("'%s'  \n",p);*/
			} else
				while (kraj>s) {
					*(kraj+br_cifara-razlika)=*kraj;
					kraj--;
				}

			/* *pocetak='\0';*/
			/*printf ("'%s'  \n",p);*/
			/* printf ("kraj je %c  ",*kraj);*/
			/*okretanje naopako*/
			char sbroj[12];
			char *brojstring=sbroj;
			*brojstring=0;
			broj3=0;
			br_cifara2=0;
			do {
				cifra=broj2%10;
				broj2=broj2/10;
				broj3=broj3*10 + cifra;

			} while (broj2>0);

			broj4=broj3;
			do {                              /*broj cifara broja okrenutog naopako*/
				broj4=broj4/10;
				br_cifara2++;
			} while (broj4>0);

			if (broj==0) {
				*brojstring='0';
				brojstring++;
				*brojstring='\0';
				/*printf ("'%s \n",brojstring-1);*/
			} else {
				while(broj3!=0) {
					cifra=broj3%10;
					broj3=broj3/10;
					*brojstring=cifra+'0';
					brojstring++;
				}
				if (br_cifara2<br_cifara) {   /*ako je broj cifara naopakog manji od broja cifara dvostrukog broja to znaci da je na kraju 0, pa se treba dodati 0 u string*/
					int i,razlika1=br_cifara-br_cifara2;
					for (i=0; i<razlika1; i++) {
						*brojstring='0';
						brojstring++;
					}
				}
				*brojstring='\0';
			}
			/*printf ("'%s'\n",brojstring-br_cifara);*/
			brojstring=brojstring-br_cifara;
			/* printf ("'%s'  ",p);*/
			/*printf ("pocetak je %c  ",*pocetak);*/
			pocetak=s;

			while (*brojstring!='\0') {
				*pocetak=*brojstring;
				pocetak++;
				brojstring++;
			}

		}
		if (broj!=0 && (br_cifara<razlika))
			/*s=s+br_cifara+1;*/
			s=s+razlika;
		else if (broj!=0)
			s=s+br_cifara;
		else
			s++;
		/*printf ("novo s ce biti %c\n",*s);*/
	}

	return p;
}
int main()
{
	char tekst[100]="ovo je 00000 neka 123 \n recenica 0002";
	printf ("'%s'  \n",dvostruko(tekst));
	return 0;
}
