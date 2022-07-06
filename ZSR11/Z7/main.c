#include<stdio.h>
#include<math.h>
void unesi(char niz[], int velicina) {
     char znak = getchar();
     if (znak == '\n') znak = getchar();
     int i = 0;
     while (i < velicina-1 && znak != '\n') {
            niz[i] = znak;
i++;
znak = getchar();  }
niz[i] = '\0';  }

const char* podstring(const char* s1, const char* s2){
while(*s1!='\0'){
const char* p=s1;
const char* q=s2;
while(*p++==*q++)
if(*q=='\0') return s1;

s1++;}
return NULL;
}
void trazi_broj(const char *s, int broj){
char sbroj[12];
//sbroj[12]='\0';
char* sb=sbroj+11;
int tmp=broj;
do{
*sb=fabs(broj%10) + '0';
broj/=10;
sb--;
}while(broj!=0);
//s++;
if(tmp<0) *sb='-';
else sb++;
printf("%s",sb);
if(podstring(s,sb)) printf("DA");
else printf("NE");
}
int main(){
char string[50];
unesi(string,50);
printf("Broj:");
int br;
//char drugi[25];
//unesi(drugi,25);
scanf("%d",&br);
trazi_broj(string,br);
//if(podstring(string,drugi)) printf("DA");
//else printf("NE");
return 0;}
