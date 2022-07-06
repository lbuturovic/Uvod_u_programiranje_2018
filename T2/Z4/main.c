#include <stdio.h>

int main()
{
	int a,b,c,min,max,mid=0;
	printf("Unesite tri broja: ");
	scanf("%d %d %d",&a, &b, &c);
		if((a>=50 && b>=50 && c>=50)&&(a<=200 && c<=200 && b<=200))
		{
			min=a;
			if(b<min) min=b;
			if(c<min) min=c;
			max=a;
			if(b>max) max=b;
			if(c>max) max=c;
			if((a==max && b==min) || (b==max && a==min)) mid=c;
			if((a==max && c==min) || (c==max && a==min)) mid=b;
			if((b==max && c==min) || (c==max && b==min))mid=a;
			printf("Brojevi poredani po velicini glase: %d,%d,%d\n",min, mid, max);
			if(a==b && a==c) printf("Unesen je 1 razlicit broj");
			else if((a!=b && a==c)||(a!=c && a==b )||(b!=a && b==c)) printf("Unesena su 2 razlicita broja");
			else printf("Unesena su 3 razlicita broja");
			
		}
		else printf("Svi brojevi nisu iz intervala 50 do 200");
			
	
	return 0;
}
