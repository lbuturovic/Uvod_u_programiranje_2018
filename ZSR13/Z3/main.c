#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char ime[20];
	char prezime[20];
};

struct Ocjena {
	struct Student s;
	char predmet[100];
	int ocjena;
};

struct Predmet {
	int id;
	char naziv[100];
	float prosjek;
};

int ucitaj_predmete (struct Predmet predmeti[], int br)
{
	int i=0,j;
	FILE* ulaz;
	ulaz=fopen ("predmeti.txt", "r");
	if (ulaz==NULL)
	{
		printf ("greska\n");
		return 0;
	}
	
	while (i<br && fscanf (ulaz,"%d,",&predmeti[i].id)==1)
	{
		j=-1;
		do
		{
			if (j<100) j++;
			predmeti[i].naziv[j]=fgetc(ulaz);
		} while (predmeti[i].naziv[j]!=',' && predmeti[i].naziv[j]!=EOF);
		predmeti[i].naziv[j]='\0';
		if (fscanf (ulaz, "%f\n",&predmeti[i].prosjek)==0) break;
		i++;
	}
	
	fclose (ulaz);
	return i;
}

int ucitaj_ocjene (struct Ocjena ocjene[], int br)
{
	
	int ucitano;
	FILE* ulaz;
	ulaz=fopen ("ocjene.dat", "rb");
	if (ulaz==NULL)
	{
		printf ("greska\n");
		return 0;
	}
	
	/*for (i=0; i<br;i++)
	{
	/* ucitano= fread (ocjene[i].s.ime,1,19, ulaz);
	 ocjene[i].s.ime[ucitano]='\0';
	 ucitano= fread (ocjene[i].s.prezime,1,19, ulaz);
	 ocjene[i].s.prezime[ucitano]='\0';*/
	 ucitano=fread (ocjene,sizeof (struct Ocjena),br, ulaz );
	/* ucitano=fread (ocjene[i].s, sizeof (struct Student),10000,ulaz);
	 ucitano=fread (ocjene[i].predmet, 1,99,ulaz);
	 ocjene[i].predmet[ucitano]='\0';
	 ucitano=fread(&ocjene[i].ocjena,4,1,ulaz);*/
	 
	/*}*/
	fclose (ulaz);
	return ucitano;
}
void zapisi_predmete (struct Predmet predmeti [], int br)
{
	int i;
	FILE* izlaz;
	izlaz=fopen ("predmeti.txt","w");
	if (izlaz==NULL)
	{
		printf ("greska\n");
		exit(1);
	}
	for (i=0;i<br;i++)
	{
		fprintf (izlaz,"%d,%-s,%-.2f\n",predmeti[i].id, predmeti[i].naziv, predmeti[i].prosjek);
	}
	fclose (izlaz);
	return;
}

struct Predmet max_prosjek (struct Predmet predmeti[], int br)
{
	int max=0;
	int i;
	for (i=0;i<br;i++)
	{
		if (predmeti[i].prosjek>predmeti[max].prosjek)
		max=i;
	}
	return predmeti[max];
}

void predmet_studenti (struct Predmet predmeti [], int brpr, struct Ocjena ocjene [],int broc)
{
	int i,j;
	int a=0;
	struct Predmet maxpredmet;
	maxpredmet=max_prosjek(predmeti, brpr);
	/*printf ("max predmet je %d",maxpredmet.id);*/
	for (i=0;i<broc;i++)
	{
		j=0;
		a=0;
		while (ocjene[i].predmet[j]==maxpredmet.naziv[j] && ocjene[i].predmet[j]!='\0' && maxpredmet.naziv[j]!='\0')
		{
			j++;
			a=1;
			if (!(ocjene[i].predmet[j]==maxpredmet.naziv[j]) )
			{
				a=0;
				break;
			}
		}
		/*printf ("a je %d\n",a);*/
		if (a==1)
		printf ("%s %s %d\n",ocjene[i].s.ime, ocjene[i].s.prezime, ocjene[i].ocjena);
	}
	
	
	return;
}
int main() {

	return 0;
}
