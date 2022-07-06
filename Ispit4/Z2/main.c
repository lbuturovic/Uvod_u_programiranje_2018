#include <stdio.h>

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

/*void zamijeni_string_ubaci(char* s, const char* pretraga, const char* zamjena, int pomak) {
	char* pozicija = strstr(s, pretraga);
	while (pozicija) {
		char* kraj = pozicija;
		while (*kraj != '\0') kraj++;
		while (kraj > pozicija) {
			*(kraj+pomak) = *kraj;
			kraj--;
		}
		while (*zamjena != '\0') *pozicija++ = *zamjena++;
		pozicija = strstr(pozicija+pomak, pretraga);
	}
}

int Da_Li_Razdvaja(char* s)
{
	
	if((*s>='0' && *s<='9') || (*s==' ') || (*s=='\n') || (*s=='\t')) return 1;
	
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
void zamijeni1 (char* s)
{
    int duzina=4;
    while(*s!='\0') {
        if(*s=='1') {
            char* kraj=s;
            while(*kraj!='\0') kraj++;
            while(kraj>s) {
                *(kraj+duzina)=*kraj;
                kraj--;
            }
            *s++='j';
            *s++='e';
            *s++='d';
            *s++='a';
            *s='n';
        }
        s++;
    }

}*/
int Da_Li_Razdvaja(char* s)
{
	
	if((*s>='0' && *s<='9') || (*s==' ') || (*s=='\n') || (*s=='\t')) return 1;
	
	return 0;
}

char* udvostruci_rijec (char* s)
{
    char* poc=s;
    int duzina=0;
    int razmak=1;
    char* pomocni=s;
    while(*s!='\0') {
    	if(Da_Li_Razdvaja(s)==1) razmak=1;
		else if(razmak==1) {
			char* kraj=s;
			razmak=0;
			char* pocetak_rijeci=s;
			pomocni=s;
			while(Da_Li_Razdvaja(pocetak_rijeci)==0 && *pomocni!='\0')
			{
				*pomocni=*pocetak_rijeci;
				pomocni++;
				pocetak_rijeci++;
				
			}
			char* kraj_rijeci=pocetak_rijeci;
			duzina=pocetak_rijeci-s+1;
			*pomocni='\0';
			pomocni=s;
			pocetak_rijeci=s;
            
            while(*kraj!='\0') kraj++;
            while(kraj>s) {
                *(kraj+duzina)=*kraj;
                kraj--;
            }
            char* pomm=pomocni;
            while(*pomocni!='\0'){
            	*s=*pomocni;
            	s++;
            	pomocni++;
            	
            }
            
            *s=' ';
            s++;
            
            pomocni=pomm;
            while(*pomocni!='\0' && *s!='\0'){
            	*s=*pomocni;
            	s++;
            	pomocni++;
            	
            }
            
            s=kraj_rijeci+duzina+1;
            continue;
        }
        s++;
    }
    
    return poc;
    
}


int main() {
	char niz[100];
	unesi(niz, 100);
	udvostruci_rijec(niz);
	
	printf("%s",udvostruci_rijec(niz));
	return 0;
}
