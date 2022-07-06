#include <stdio.h>
int je_li_znak (char *p)
{
	if(*p==' ' || *p=='.' || *p==',' || *p=='!' || *p=='?' || *p==';' || *p=='\0') return 1;
	return 0;
}
int maximum(char *p) {
	int max=0;
	int br=0;
	char* pom;
	while(*p!='\0')
	{
		if(!(je_li_znak(p)))
		{
			br=0;
			pom=p;
			while(je_li_znak(pom)!=1)
			{
				br++;
				pom++;
			}
			if (br>max) max=br;
			p=pom;
		}
		
		
		p++;
	}
	
	
	
	return max;
}
int minimum(char *p, int max) {
	int min=max;
	int br=0;
	char* pom;
	while(*p!='\0')
	{
		if(!(je_li_znak(p)))
		{
			br=0;
			pom=p;
			while(je_li_znak(pom)!=1)
			{
				br++;
				pom++;
			}
			if (br<min) min=br;
			p=pom;
		}
		
		
		p++;
	}
	
	
	
	return min;
}
int main() {
	printf("Proba 1, Zadatak 12");
	char string[]="ja je jo ja je ji je.";
	printf("\nmax je %d",maximum(string));
	printf("\nmin je %d",minimum(string,maximum(string)));
	return 0;
}
