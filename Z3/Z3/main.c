#include <stdio.h>
int daj_sljedeci_broj(int vrijednost)
{
	static int broj=50,min=0, max=100;

	if(vrijednost==0) { /*ukoliko je u mainu unesen br van intervala samo ce vratiti prethodni ponudjeni broj(sto je br na polovini intervala), a u prvom slucaju to ce biti 50*/
		return broj;
	}
	if(vrijednost==1) { /*ukoliko je zamisljeni br veci donja granica intervala postaje prethodni ponudjeni broj, a naredni ponudjeni postaje polovina intervala*/
		min=broj;
		broj=(broj+max)/2;

	}
	if(vrijednost==-1) { /*ukoliko je zamisljeni broj manji gornja granica postaje prethodni ponudjeni broj, a naredni ponudjeni broj ce biti polovina intervala*/
		max=broj;
		broj=(broj+min)/2;
	}


	return broj;

}
int main()
{
	printf("Zamislite neki broj...\n");
	int pokazatelj=0;
	char slovo;
	do {
		printf("Da li je taj broj %d? ",daj_sljedeci_broj(pokazatelj));
		scanf("%c ",&slovo);
		if(slovo=='M') pokazatelj=-1;
		else if(slovo=='V') pokazatelj=1;
		else if(slovo=='J') {
			printf("Pogodio sam!");
			break;

		} else {
			printf("Pogresan unos, probajte ponovo.\n");
			pokazatelj=0;
			continue;
		}
	} while(slovo!='J');


	return 0;
}
