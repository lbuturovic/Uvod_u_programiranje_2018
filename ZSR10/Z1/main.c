#include <stdio.h>
const char* podstring(const char* s1, const char* s2) {
	while (*s1 != '\0') {
		const char* p = s1;
		const char* q = s2;
		while (*p++ == *q++)
			if (*q == '\0') return s1;
		s1++;
	}
	return NULL;
}

int PronadjiPosljednji(const char* s1, const char* s2){
	int indeks=-1;
	const char* poc=s1;
	const char* poc2=s2;
	while(*s1!='\0') {
		const char* p= s1;
		const char* q=s2;
		while(*p++==*q++)
		  if(*q == '\0')
		  {
		  	indeks=s1-poc;
		  	q=poc2;
		  }
		
		s1++;
	}
	
	return indeks;
	
}
int main() {
	printf("ZSR 10, Zadatak 1");
	return 0;
}
