#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

char* PopuniLijevo (char* str, int n)
{
	char* poc=str;
	int duzina=strlen(str);
	if(duzina>=n) return poc;
	char pomstr[200];
	int razlika=n-duzina;
	
	int i=0;
	for(i=0;i<=razlika;i++)
	pomstr[i]=' ';
	i=razlika;
	while(*str!='\0')
	{
		pomstr[i]=*str;

		i++;
		
		str++;
	}
	pomstr[i]='\0';
	str=pomstr;
	printf("%s",str);
	return str;
}
int main() {
/*	char niz1[100];
	int n;
	printf("Unesi string: ");
	unesi (niz1,100);
	scanf("%d",&n);
	PopuniLijevo(niz1,n);
		printf("%s",str);*/
		char n1[100] = "Bosna", n2[100] = "Hercegovina";
char *p1 = PopuniLijevo(n1, 15);
char *p2 = PopuniLijevo(n2, 15);
printf ("'%s'\n'%s'", p1, p2);
	return 0;
}
