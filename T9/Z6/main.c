#include <stdio.h>
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
int strcmpp(const char *s1, const char *s2)
{
	int br1=0,br2=0;
	char* poc1=s1;
	char* poc2=s2;
	while(*s1!='\0')
	br1++;
	while(*s2!='\0')
	br2++;
	s1=poc1;
	s2=poc2;
    while (*s1 != '\0' && *s2 != '\0') {
		if (*s1 < *s2) return -1;
		if (*s1 > *s2) return 1;
		s1++;
		s2++;
	}
	if (br1<br2) return -1;
	if(br1>br2) return 1;
	return 0;
}

int main() {
	char rijec1[80],rijec2[80];
	printf("Prva rijec: ");
	unesi(rijec1,80);
	printf("Druga rijec: ");
	unesi(rijec2,80);
	strcmpp(rijec1,rijec2);
	printf("\n%d",strcmpp(rijec1,rijec2));
	return 0;
}
