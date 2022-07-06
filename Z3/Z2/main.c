#include <stdio.h>
double parallel_max(double* clan1,double* clan2)
{
	if(clan2==clan1+1) return *clan1; /*trivijalni slucaj, ako je u nizu jedan clan*/
	if(parallel_max(clan1,clan1+(clan2-clan1)/2)>parallel_max(clan1+(clan2-clan1)/2,clan2))
		return parallel_max(clan1,clan1+(clan2-clan1)/2); /*funkcija poziva samu sebe na intervalu do pola niza i od pola niza, i ti intervali se konstantno "dijele" dok se ne nadje maksimum*/




}
int main()
{
	printf("Zadaća 3, Zadatak 2");
	return 0;
}
