#include <stdio.h>
int prebroji(char* s)
{
	int broj = 0;
	while (*s != '\0') {
		broj++;
		s++;
	}
	return broj;
}
void IspisiUnazad (const char* s)
{
	if(*s!='\0') {

		IspisiUnazad(s+1);
	}

	printf("%c",*s);

}


int main()
{
	printf("ZSR 9, Zadatak 5");
	return 0;
}
