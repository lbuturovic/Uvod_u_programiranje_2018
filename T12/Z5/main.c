#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int main()
{
    FILE* ulaz;
    FILE* izlaz;
    char predmet[100];
    char* p=predmet;
    char* q=predmet;
    char znak;
    int pr=0, br=0, br1=0, br2=0,polozili=0;
    double prosjek=0, prolaznost=0;
    int unos=0;
    int brindeksa, ocjena, ocjene=0, br_ocjena=0, predmet1,kljuc,istina=0;
    do{
    
    printf("Unesite 1 za statistiku studenta, 2 za statistiku predmeta, 0 za izlaz:");
    scanf("%d",&unos);
    if(unos==2)
    {
    do {
        ulaz=fopen("predmeti.txt","r");
        if(ulaz==NULL){
            printf("Pogreska kod otvaranja datoteke!");
            exit(1);
        }
        
        kljuc=0;
        br=0;
        br1=0;
        printf(" Unesite predmet: ");
        unesi(predmet,100);
        p=predmet;
        q=predmet;
        znak='a';
        while(*q!='\0')
        {
            br1++;
            q++;
        }
        while(znak!=EOF)
        {
            znak=fgetc(ulaz);
            if (znak=='\n') pr++;
            if(*p=='\0') break;
            if(znak==*p) br++;
            else {
                p=predmet;
                br=0;
            }
            
            p++;
        }
        if(br!=br1-1)
        {
            printf("Nepostojeci predmet!\n");
            p=predmet;
            kljuc=1;
        }
        
        fclose(ulaz);
    }while(kljuc!=0);
    izlaz=fopen("ispiti.txt","r");
    if(kljuc==0) {
        
        if(izlaz==NULL) {
            printf("Pogreska kod otvaranja datoteke!");
            exit(1);
        }
        
        while(fscanf(izlaz, "%d %d %d\n", &brindeksa, &predmet1, &ocjena)==3) {
            if(predmet1==pr)
            {
                if(ocjena>=6) polozili++;
                br_ocjena++;
                ocjene+=ocjena;
                br2++;
                istina++;
            }
        }
        if(istina==0) printf("Zalimo, ali ne postoje podaci o predmetu %s!",predmet);
        else {
            prosjek=(double)ocjene/br2;
            prolaznost=((double)polozili/br_ocjena)*100;
            printf("Prosjecna ocjena: %.2f",prosjek);
            printf("\nProlaznost: %g%%\n", prolaznost);
        }
    }
    fclose(izlaz);
    prolaznost=0;
    prosjek=0;
    ocjene=0;
    br2=0;
    polozili=0;
    br_ocjena=0;
    }
    if(unos==1)
    {
    	izlaz=fopen("ispiti.txt","r");
    	if(izlaz==NULL)
    	{
    	    printf("Greska pri otvaranju!");
    	    return 0;
    	}
    	int broj_indeksa;
    	printf(" Unesite broj indexa: ");
    	scanf("%d",&broj_indeksa);
    	istina=0;
    	while(fscanf(izlaz, "%d %d %d",&brindeksa, &predmet1, &ocjena)==3)
    	{
    	    if(brindeksa==broj_indeksa)
    	    {
    	        pr++;
    	        if(ocjena>=6) polozili++;
    	        ocjene+=ocjena;
    	        istina=1;
    	    }
    	}
    	if (istina==0) {printf("Zalimo, ali ne postoje podaci o studentu sa brojem indexa %d!",broj_indeksa);
    	                }
    	if(istina==1) {
    	prolaznost=((double)polozili/pr)*100;
    	printf("Student je slusao %d predmeta, a polozio %d(%g%%).\nProsjecna ocjena polozenih predmeta je %.1f\n",pr,polozili,prolaznost,(double)ocjene/polozili);}
    	prolaznost=0;
    	ocjene=0;
    	pr=0;
    	polozili=0;
    	fclose(izlaz);
    	
    }
    }while(unos!=0);
    return 0;
    
    
    
}