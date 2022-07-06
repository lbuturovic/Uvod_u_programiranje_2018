#include <stdio.h>

int prost_broj (int n) {
	int i;
	if(n<=0) {
		return 0;}
		else if(n==1) {
			return 0;
		}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{ return 0;
			
		}
	
	}
	if(i==n)
	return 1;
}

int suma_cifara(int broj){
	if(broj<=0) broj=-1*broj;
	int cifra;
	int suma=0;
	do{
		cifra=broj%10;
		suma+=cifra;
		broj=broj/10;
		
		
	}while(broj!=0);
	
	
	
	return suma;
	
}


int proste_sume(int niz1[], int vel1, int niz2[],int kapacitet){
	
	int i=0;

	int j=0;
	
	for(i=0;i<vel1;i++){
		
		if(prost_broj(suma_cifara(niz1[i]))) {
			
			niz2[j]=niz1[i];
			j++;
			if(j>=kapacitet) return j;
		}
		

		
	}
	
	
	
	return j;
	
	
}

int main() {
	printf("Ispit 4, Zadatak 1");
	return 0;
}
