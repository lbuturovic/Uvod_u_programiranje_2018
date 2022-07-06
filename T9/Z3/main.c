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
    char* kapitaliziraj(char *s)
    {
        char* poc=s;
        int br=0;
        while(*poc!='\0')
        {
        if(*poc==' ' && *(poc+1)>='a' && *(poc+1)<='z')
       {
    
        *(poc+1)=*(poc+1)-32;
           
       }
       if(br==0 && *poc>='a' && *poc<='z' )
       {
           
           *poc=*poc-32;
       }
    poc++;
    br++;
        }
        return s;

    }
int main() {
    char niz[80];
    printf("Unesite neki tekst: ");
    unesi(niz,80);
    kapitaliziraj(niz);
    printf("%s",niz);
	return 0;
}
