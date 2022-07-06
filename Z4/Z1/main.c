#include <stdio.h>
int provjeri_zagrade(char* q)
{
	char* p;
	char* pom=q;
	int zatvorene=1;
	while(*q!='\0') {
		if(*q=='(') { /*ukoliko u stringu ima "(" uvodi se pomocni pokazivac*/
			p=q+1;

			while(*p!=')') {
				if (*p=='\0') return 0; /*ako zagrada nije zatvorena vraca se 0*/
				p++; /*pomocni pokazivac se stavlja na zatvorenu zagradu*/
			}
			q=q+1;
			while(q!=p) {
				if(*q=='[' || *q==']' || *q=='{' || *q=='}' || *q=='(' || *q==')') return 0; /*ako se unutar malih zagrada nalazi bilo koja druga zagrada vraca se 0*/
				q++;
			}
		}

		q++; 
	} /*ukoliko nije vracena nula znaci da je mala zagrada uredno zatvorena*/
	q=pom;
	p=pom; /*pokazivaci se vracaju na pocetak*/
	while(*q!='\0') {
		if(*q=='[') {
			p=q;
			while(*p!='\0' && *p!=']')
				p++; /*pomocni pokazivac se pomjera na kraj srednje zagrade*/
			if(*p=='\0') return 0;
			q++;
			while(q!=p) {
				if(*q=='{' || *q=='}' || *q=='[' || *q==']') return 0; /*provjerava se da li se srednja i velika zagrada naaze unutar srednje, a ukrstavanje sa malom zagradom je provjereno ranije i 0 je vracena ukoliko je doslo do ukrstenja*/
				q++;
			}
		}



		q++;
	}

	q=pom;
	p=pom; /*pokazivac se vracaju na pocetak*/
	while(*q!='\0') {
		if(*q=='{') {
			p=q+1;
			while(*p!='}') {
				if(*p=='{') return 0; /*ukoliko se u velikoj zagradi nalazi nova otvorena velika vraca se 0*/
				if(*p=='\0') return 0; /*ukoliko zagrada nikad nije zatvorena vraca se 0*/

				p++;
			}
			if(*p=='\0') return 0;
		}

		q++;
	}


	return zatvorene; /*ukoliko se nikad nije vratila 0, sve zagrade su uredno zatvorene*/
}
int main()
{
	return 0;
}
