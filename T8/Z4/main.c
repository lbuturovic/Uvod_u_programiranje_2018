#include <stdio.h>

int drugi(int p[], int vel)
{
	int max=*p;
	int *q=p+vel;
	int *pocetak=p;
	while(p<q) {
		if(*p>max) max=*p;
		p++;

	}
	int maxi;
	int m=max;
	if(max==*pocetak) p=pocetak+1;
	else p=pocetak;
	max=*p;
	if(p==q) maxi=-1;
	else {
		while(p<q) {
			if(*p>=max && *p!=m) {
				max=*p;
				maxi=p-pocetak;

			}
			p++;

		}
		if(max==m) maxi=-1;
	}
	return (maxi);
}
int main()
{
	printf("Unesite niz brojeva: ");
	int i,n,niz[1000];
	for(i=0; i<1000; i++) {
		scanf("%d",&niz[i]);
		if(niz[i]==-1) break;
	}
	n=i;
	printf("Indeks drugog po velicini je: %d",drugi(niz,n));






	return 0;
}
