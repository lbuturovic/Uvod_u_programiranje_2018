#include <stdio.h>
#include <stdlib.h>
#define KAPACITET 300

	struct Student {
	char prezime[20];
    char ime[15];
    int  broj_bodova1;
    int  broj_bodova2;
		
	};
	struct Student studenti[KAPACITET];
	int broj_studenata;
void unesi(char niz[], int velicina) {
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
void zapisi(struct Student* studenti, int broj_studenata) {
    int i;
    FILE* ulaz=fopen("ispit.txt","a");
    if(ulaz==NULL) {
        printf("Greska pri otvaranju datoteke ispiti.txt\n");
        exit(1);
    }
    
    for(i=0;i<broj_studenata;i++) {
        fprintf(ulaz, "%s%19s%13d%3d\n", studenti[i].prezime, studenti[i].ime, studenti[i].broj_bodova1, studenti[i].broj_bodova2);
        if(ferror(ulaz)) {
            printf("Greska prilikom pisanja datoteke.\n");
            break;
        
        }
    }
    fclose(ulaz);
    
}
	
void unos_studenta() {
	printf("Unesite ime: ");
	unesi(studenti[broj_studenata].ime,15);
	printf("Unesite prezime: ");
	unesi(studenti[broj_studenata].prezime,20);
	printf("Unesite broj bodova na I parcijalnom: ");
	scanf("%d",&studenti[broj_studenata].broj_bodova1);
	printf("Unesite broj bodova na II parcijalnom: ");
	scanf("%d",&studenti[broj_studenata].broj_bodova2);
	broj_studenata++;
	zapisi(studenti,broj_studenata);
	
}
int ucitaj(struct Student* studenti) {
    FILE *ulaz;
	int i=0;
	if((ulaz=fopen("ispit.txt","a"))==NULL) {
	    printf("Greska pri otvranju datoteke ispit.txt");
	    return 0;
	}
	
	while(i<KAPACITET && fscanf(ulaz,"%20s%15s%2d%2d \n", studenti[i].prezime, studenti[i].ime,&studenti[i].broj_bodova1, &studenti[i].broj_bodova2)==4)
	{
	   i++; 
	}
	fclose(ulaz);
	return i;
	
    
}

void ispis()
{
    int i=0;
    for(i=0;i<broj_studenata;i++)
    printf("\n%d. %s %s - %d, %d\n",i+1, studenti[i].ime, studenti[i].prezime, studenti[i].broj_bodova1, studenti[i].broj_bodova2);
    
    
}
	int main() {

	broj_studenata=ucitaj(studenti);
	zapisi(studenti,broj_studenata);
	int opcija;
	do{
	    printf("Unesite 1 za unos, 2 za ispis, 0 za izlaz: ");
	    scanf("%d",&opcija);
	    switch(opcija) {
	        case 1: unos_studenta(); break;
	        case 2: ispis(); break;
	        case 0: break;
	        
	    }
	}while(opcija!=0);
	
	
	return 0;
}
