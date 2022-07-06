#include <stdio.h>
#include <math.h>
void oduzmi_cifre(int niz[],int vel)
{

	int j,k,cifra[100],br,clan;
	for(j=0; j<vel; j++) {
		clan=niz[j];
		br=0;
		do {
			clan/=10;
			br++;
		} while(clan!=0); /*ovaj dio koda je prebrojao cifre u clanu niza*/
		if (br==1) {    /*ako je clan jednocifren taj clan niza postaje 0*/
			niz[j]=0;
			continue;
		}
		clan=niz[j];
		for(k=0; k<br; k++) {
			cifra[k]=clan%10; /*rastavlja cifre clana niza i stavlja ih u novi niz*/
			clan=clan/10;

		}
		niz[j]=0;
		for(k=0; k<br-1; k++) {
			cifra[k]=cifra[k]-cifra[k+1]; /*nove cifre*/
			if(cifra[k]<0) cifra[k]=-1*cifra[k];
			niz[j]+=cifra[k]*pow(10,k); /* izmjenjeni clan pocetnog niza*/
		}


	}


}
int main()
{
	int i,niz2[100],n;
	printf("Unesi n: ");
	scanf("%d",&n);
	printf("Unesi clanove niza: ");
	for(i=0; i<n; i++)
		scanf("%d",&niz2[i]);
	oduzmi_cifre(niz2,n);
	for(i=0; i<n; i++)
		printf("%d, ",niz2[i]);
	return 0;
}
