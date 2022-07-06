#include <stdio.h>

int main() {
	FILE *ulaz;
	
	int brindexa, predmet, ocjena,i=0,vel,predmett,ocjene=0,broj_ocjena=0,polozili=0;
	double prosjek;
	ulaz=fopen("ispiti.txt","r");
	if(ulaz==NULL) {
		printf("GRESKA");
		return 0;
	}
	printf("Unesite predmet: ");
	scanf("%d",&predmett);
	int istina=0;
	while(fscanf(ulaz,"%d %d %d\n",&brindexa,&predmet,&ocjena)==3) {
		
		if(predmet==predmett)
		{
			if(ocjena>=6) polozili++;
			ocjene+=ocjena;
			broj_ocjena++;
			istina=1;
		}
	}
	if(istina==0) {
		printf("Zalimo, ali ne postoje podaci o predmetu sa brojem %d!",predmett);
		return 0;}
	prosjek=(double)ocjene/broj_ocjena;
	printf("Prosjecna ocjena: %.2f",prosjek);
	double prolaznost=(double)polozili/broj_ocjena;
	printf("\nProlaznost: %g%%",prolaznost*100);
	fclose(ulaz);
	
	return 0;
}
