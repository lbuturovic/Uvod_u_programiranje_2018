#include <stdio.h>
#include <math.h>
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
int stepenovanje(int br, int n)
{
	int i=0;
	int y=1;
	for(i=0;i<n;i++)
	{
		y=y*br;
	}
	return y;
}
int Je_Li_Broj (const char* s)
{
	if(*s>='0' && *s<='9') return 1;
	return 0;
}
int UnesiRealan (const char* s, double* br)
{
	const char* poc=s;
	const char* p=s;
	int brr=0;
	while(*s!='\0')
	{
		if(Je_Li_Broj(s)==0)
		{
		brr++;
		if(*s!='.')return 0;
		}
		s++;
	}
	if (brr>1) return 0;
	s=poc;
	/*if(Je_Li_Broj(s)==0 && *s!='.') return 0;
	else
	{
		if(*s=='.') s++;
		while(Je_Li_Broj(s) && *s!='\0')
		{
			
			
			s++;
		}
		int brojac=0;
		if(*s!='.' && *s!='\0') { p=s; return 0;}
		while(Je_Li_Broj(s)==0 && *s!='\0')
		{
			brojac++;
			s++;
		}
		if(brojac>1) return 0;
		while(Je_Li_Broj(s)&& *s!='\0')
		s++;
		if(*s!='\0') return 0;
		s=poc;
		int tmp=0;*/
		int tmp=0;
		if(*s=='.'){ 
		s++;
		brr=0;
		while(*s!='\0')
		{
			tmp=tmp*10+*s-'0';
			s++;
			brr++;
		}
		*br=(double)tmp/stepenovanje(10,brr);
		*br=round(*br*stepenovanje(10,brr))/stepenovanje(10,brr);
		return 1;
			
		}
		while(*s!='.' && *s!='\0')
			{
				tmp=tmp*10+*s-'0';
				s++;
			}
			if(*s=='\0' && *poc!='.') {*br=tmp;
						  return 1;}
			s++;
		int cijeli=tmp;
		tmp=0;
		if(*poc=='.') cijeli=0;
		int stepen=0;
		while(*s!='\0'){
			tmp=tmp*10+*s-'0';
			s++;
			stepen++;
			
		}
		int ostatak=stepenovanje(10,stepen);
		double ostatakk=(double)tmp/ostatak;
		*br=cijeli+ostatakk;
		*br=round(*br*ostatak)/ostatak;
		
		
return 1;		
}
	
		
		
	
	
	
	

int main() {
	char niz[100];
	unesi(niz,100);
	double br;
	UnesiRealan(niz,&br);
	printf("ZSR 9, Zadatak 9");
	return 0;
}
