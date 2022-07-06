#include <stdio.h>
void unesi(char niz[], int velicina)
{
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

void Pretvori_u_mala(const char* s){
	int temp;
	while(*s!='\0')
	{
		temp=*s;
		if(temp>='A' && temp<='Z')
		temp+=32;
	}
}
void Pretvori_u_velika(const char* s){
	int temp;
	while(*s!='\0')
	{
		temp=*s;
		if(temp>='a' && temp<='z')
		temp-=32;
	}
}
int Da_Li_Je_Slovo(const char* s)
{
	
	if((*s>='A' && *s<='Z') || (*s>='a' && *s<='z')) return 1;
	
	return 0;
}
int Da_li_Su_Ista_Slova(const char*s, const char* q)
{
	int temp1,temp2;
	temp1=*s;
	temp2=*q;
	if(temp1>='a' && temp1<='z') temp1=temp1-32;
	if(temp2>='a' && temp2<='z') temp2=temp2-32;
	if(temp1==temp2) return 1;
	return 0;
}
int JeLiPalindrom(const char* s){

	const char* k=s;
	const char*p=s;
	while(*s!='\0')
	s++;
	k=s-1;
	s=p;
	
		while(k>s)
		{
			if(Da_Li_Je_Slovo(k) && Da_Li_Je_Slovo(s))
			{
				
				if(Da_li_Su_Ista_Slova(k,s)==0) return 0;
				s++;
				k--;
			}
			else if(Da_Li_Je_Slovo(k)==0 && Da_Li_Je_Slovo(s)==0)
			{
				s++;
				k--;
			}
			else if(Da_Li_Je_Slovo(k)==0 && Da_Li_Je_Slovo(s))
			{
				k--;
			}
			else if(Da_Li_Je_Slovo(s)==0 && Da_Li_Je_Slovo(k))
			{
				s++;
			}
			
		}
	
	
		
	
	
	return 1;
	
	
	
	
}
int main() {
	char niz[100];
	unesi(niz,100);
	printf("%d",JeLiPalindrom(niz));
	return 0;
}
