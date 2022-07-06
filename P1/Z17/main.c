#include <stdio.h>
#include <math.h>
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
int cifraa(char *p)
{
	if(*p>='0' && *p<='9') return 1;
	return 0;
}
char* zamijeni(char* p)
{
	char* poc=p;
	char* s1=p;
	char* s2=p;
	char* kraj=p;
	int vbroj=0;
	int pom_vbroj=0;
	int istina=1;
	int br_cifara=0;
	int novi_br_cifara=0;
	int br_nula=0;
	int prostor=0;
	int cifra;
	while(*p!='\0')
	{
		if(cifraa(p)==1)
		{
			s1=p;
			s2=p;
			istina=0;
			while(cifraa(s1)==1 && *s1!='\0')
			{
				if(*s1=='0' && istina==0)
				{
					s1++;
					s2++;
					br_nula++;
				}
				else {
					br_cifara++;
					istina++;
					s1++;
					
				}
				
			}
			
			istina=0;
			int pom_br_cifara=br_cifara;
			while(s2!=s1) {
				vbroj=vbroj+((*s2-48)*pow(10,pom_br_cifara-1));
				pom_br_cifara--;
				s2++;
			}
			
			if(vbroj==0)
			{
				p+=br_nula;
				continue;
				
			}
			novi_br_cifara=0;
			vbroj=2*vbroj;
			pom_vbroj=vbroj;
			do
			{
				pom_vbroj=pom_vbroj/10;
				novi_br_cifara++;
			}while(pom_vbroj!=0)
			
			prostor=novi_br_cifara-br_cifara;
			if(*p=='0' && istina==0)
			{
				p=p+br_nula;
				istina++;
			}
			if(prostor>0)
			{
				kraj=p;
				while(*kraj!='\0') kraj++;
				while(kraj>p)
				{
					*(kraj+prostor)=*kraj;
					kraj--;
				}
				
				p=p+novi_br_cifara-1;
				
				while(vbroj!=0)
				{
					cifra=vbroj%10;
					*p=cifra+48;
					vbroj=vbroj/10;
					p--;
					
				}
				p=p+novi_br_cifara+1;
				
			} 
			else {
				p=p-br_nula;
				while(vbroj!=0)
				{
					cifra=vbroj%10;
					*p=cifra+48;
					vbroj=vbroj/10;
					p++;
				}
				
				p=p+novi_br_cifara;
			}
			
			
			
			
		}
		
		
		p++;
	}
	
	
	
	
	return poc;
}
int main()
{

	char a[100];
	printf("Unesi: ");
	unesi(a,100);
	zamijeni(a);
	printf("%s",a);
	return 0;
}