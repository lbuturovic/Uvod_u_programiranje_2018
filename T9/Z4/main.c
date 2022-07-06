#include <stdio.h>
char max_slovo(char *s)
{
	int max_br=0, br=0;
	char znak=' ';
	
	while(*s!='\0')
	{
		if(*s>='A' && *s<='Z' || *s>='a' && *s<='z') {
		char *p=s;
		while(*p!='\0'){
		if(*p==*s || *s-32==*p || *s+32==*p) br++;
		p++;
		
		
		}
		if(br>max_br)
		{
			max_br=br;
			
			if(*s>='a' && *s<='z') znak=*s-32; else znak=*s;
			
		}
	}
	br=0;
	s++;
}

	return znak;
}
int main() {
	printf("Tutorijal 9, Zadatak 4");
	return 0;
}
