#include <stdio.h>

int main() {
	int n,br11=0,br5=0,br7=0;
	printf("Unesite brojeve: ");
	do
	{
		scanf("%d",&n);
		if(n%5==0) br5++;
		if(n%7==0) br7++;
		if(n%11==0) br11++;
	}
	while(n!=-1);
	printf("\nDjeljivih sa 5: %d\n",br5);
	printf("Djeljivih sa 7: %d\n",br7);
	printf("Djeljivih sa 11: %d",br11);
	return 0;
}
