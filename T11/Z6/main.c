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
struct Osoba {
	char ime [15];
	char prezime [20];
	int telefon;
};
struct Osoba unos_osobe(){
	struct Osoba covjek;
	printf("Unesite ime: ");
	unesi(covjek.ime,15);
	printf("Unesite prezime: ");
	unesi(covjek.prezime,20);
	printf("Unesite broj telefona: ");
	scanf("%d",&covjek.telefon);
	return covjek;
}
void ispis_osobe(struct Osoba covjek){
	
	printf("%s %s, Tel: %d",covjek.ime,covjek.prezime,covjek.telefon);
}
int main() {
	struct Osoba imenik[100];
	int i,izbor,j;
	for(i=0;i<100;i++)
	{
		printf("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
		scanf("%d",&izbor);
		if(izbor==1) imenik[i]=unos_osobe();
		if(izbor==2) {
			for(j=0;j<i;j++)
			{
				printf("\n%d. ",j+1);
				ispis_osobe(imenik[j]);
				printf("\n");
			}
			i--;
		}
		if(izbor==0) return 0;
	}
	
	return 0;
}
