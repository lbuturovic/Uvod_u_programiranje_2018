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
char* PopuniDesno (char* str, int n)
{
	char* p=str;
	char* poc=str;
	while(*p!='\0')
	{
		p++;
	}
	int brojznakova=p-poc;
	char* krajrijeci=p;
	char* krajstringa=p;
	if(brojznakova>=n) return poc;
	int razlika=n-brojznakova;
	char* maxkraj=krajstringa+razlika;
	while(krajstringa<=maxkraj)
	{
		*krajstringa=' ';
		krajstringa++;
	}
	
return poc;
	
}
char* PopuniLijevo (char* str, int n)
{
	char* p=str;
	char* poc=str;
	while(*p!='\0')
	{
		p++;
	}
	int brojznakova=p-poc;
	char* krajrijeci=p-1;
	char* krajstringa=p;
	if(brojznakova>=n) return poc;
	int razlika=n-brojznakova;
	char* maxkraj=krajstringa+razlika;
	while(i<=maxkraj)
	{
		*krajstringa=' ';
		krajstringa++;
	}
	char* pomjerenipoc=maxkraj-brojznakova;
	while(krajstringa>pomjerenipoc)
	{
		*krajstringa=*krajrijeci;
		krajstringa--;
		krajrijeci--;
	}
	while(p<poc+razlika)
	{
		*p=' ';
		p++;
	}
	
	return poc;
}
int main() {
	char niz1[100];
	int n;
	printf("Unesi string: ");
	unesi (niz1,100);
	scanf("%d",&n);
	char* p1=PopuniLijevo(niz1,n);
	printf("%s",p1);
	return 0;
}
