#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Grad {
	char naziv[20];
	int br_stanovnika;
};

struct Drzava {
	char naziv[50];
	struct Grad glavni;
};

struct Regija {
	char naziv[50];
	struct Grad glavni;
};
void izbaci_drzavu (struct Drzava drzave[], int br_drzava, int pozicija)
{
	int i;
	for (i=pozicija;i<br_drzava-1;i++)
	{
		drzave[i]=drzave[i+1];
		
	}
	return;
}
int filtriraj (struct Drzava drzave [],int br_drzava, struct Regija regije[], int br_regija)
{
	int i,j;
	
	
	
	for (i=0;i<br_drzava; i++)
	{
		for (j=0; j<br_regija; j++)
		{
			if (strcmp (drzave[i].glavni.naziv,regije[j].glavni.naziv)==0)
			{
				izbaci_drzavu(drzave,br_drzava,i);
				i--;
				br_drzava--;
				break;
			}
		}
	}
	for (i=0;i<br_drzava; i++)
	{
		if (drzave[i].naziv[0]=='Z')
		{
		izbaci_drzavu(drzave,br_drzava,i);
		i--;
		br_drzava--;
		}
	}
	
	for (i=0;i<br_drzava;i++)
	{
		if (drzave[i].glavni.br_stanovnika<10000)
		{
			izbaci_drzavu(drzave,br_drzava,i);
		i--;
		br_drzava--;
		}
	}
	return br_drzava;
}

int ucitaj_drzave (struct Drzava drzave[], int br_drzava)
{
	FILE* ulaz;
	ulaz=fopen ("drzave.dat","rb");
	if (ulaz==NULL)
	{
		printf ("Greska pri otvaranju datoteke.\n");
		return 0;
	}
	int ucitano;
	ucitano=fread (drzave, sizeof(struct Drzava),br_drzava,ulaz);
	fclose (ulaz);
	return ucitano;
}

int ucitaj_regije (struct Regija regije[], int br_regija)
{
	int i,k;
	FILE* ulaz;
	ulaz=fopen ("regije.txt","r");
	if (ulaz==NULL)
	{
		printf ("Greska pri otvaranju datoteke.\n");
		return 0;
	}
	k=0;
	while (k<br_regija)
	{ 
		
		i=-1;
		do
		{
			if (i<49) i++;
			regije[k].naziv[i]=fgetc (ulaz);
		} while (regije[k].naziv[i]!=',' && regije[k].naziv[i]!=EOF );
		regije[k].naziv[i]='\0';
		
		if (ferror (ulaz)) return k;
		
		i=-1;
		do
		{
			if (i<19) i++;
			regije[k].glavni.naziv[i]=fgetc (ulaz);
		} while (regije[k].glavni.naziv[i]!=',' && regije[k].glavni.naziv[i]!=EOF );
		regije[k].glavni.naziv[i]='\0';
		if (ferror (ulaz)) return k;
		
		if (fscanf(ulaz,"%d\n",&regije[k].glavni.br_stanovnika)==0) break;
		k++;
		if (fgetc(ulaz)==EOF)
		return k;
		fseek (ulaz,-1,SEEK_CUR);
		
	}
	
	fclose (ulaz);
	return k;
}

struct Grad max_glavni (struct Drzava drzave[], int br_drzava)
{
	int i;

    int max=0;
	for (i=0;i<br_drzava; i++)
	{
		if (drzave[i].glavni.br_stanovnika>drzave[max].glavni.br_stanovnika)
		max=i;
	}
	
	return drzave[max].glavni;
}

void drzave_regije (struct Drzava drzave[], int br_drzava, struct Regija regije[], int br_regija)
{
	struct Grad grad;
	int i;
	grad = max_glavni(drzave,br_drzava);
	for (i=0;i<br_regija;i++)
	{
		if (strcmp(regije[i].glavni.naziv,grad.naziv)==0)
		printf ("%s\n",regije[i].glavni.naziv);
	}
	
}

void zapisi_regije (struct Regija regije[], int br_regija)
{
	FILE* izlaz;
	izlaz=fopen ("regije.txt","w");
	if (izlaz==NULL)
	{
		printf ("Greska prilikom pisanja u datoteku.\n");
		exit(1);
	}
	
	int k,i;
	k=0;
	while (k<br_regija)
	{ 
		
		fprintf (izlaz,"%s,%s,%d\n",regije[k].naziv,regije[k].glavni.naziv,regije[k].glavni.br_stanovnika);
		k++;
	}
	fclose (izlaz);
	
}
int main() {
	printf("ZSR 13, Zadatak 4");
	return 0;
}

