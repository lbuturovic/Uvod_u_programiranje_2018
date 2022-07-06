#include <stdio.h>
// kako pronaci n-tu rijec po redu ako se smatra da je odv znakovima
int Da_Li_Je_Slovo(const char* s)
{
	
	if((*s>='A' && *s<='Z') || (*s>='a' && *s<='z')) return 1;
	
	return 0;
}
void NtaRijec (const char *Str, char *rijec, int n) {
	int broj_rijeci=0;
	int razmak=1;
	const char *s=Str;
	while(*s!='\0'){
		
		if(Da_Li_Je_Slovo(s)==0) razmak=1;
		else if(razmak==1) {
			razmak=0;
			broj_rijeci++;
		}
		
		if(broj_rijeci==n)
		{
			while(Da_Li_Je_Slovo(s) && *s!='\0')
			{
				*rijec=*s;
				rijec++;
				s++;
			}
			*rijec='\0';
			
			break;
			
		}
		
		s++;
		
	}
	if(broj_rijeci<n) *rijec='\0';
	
	
	
}
int main() {
	printf("ZSR 10, Zadatak 5");
	return 0;
}
