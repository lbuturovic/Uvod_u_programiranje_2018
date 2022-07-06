#include <stdio.h>

int main() {
	int n, s=0,i;
	printf("Unesite n: ");
	int znak=scanf("%d",&n);
	
	if(n<=0){
		printf("Broj nije prirodan!");
		return 0;
	}
	else if(znak!=1)
	{
		printf("Nije unesen broj!");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		s+=i*i;
	}
	printf("\nSuma je: %d",s);
	
	return 0;
}
