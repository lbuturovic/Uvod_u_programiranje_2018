#include <stdio.h>

int main() {
	float a,b,c,d;
	printf("Unesite brojeve a,b,c,d: ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if((a<c && b<c)||(a>d && b>d)) 
	{printf("Skupovi se ne sijeku.");
	 return 1;}
	if(a>=c && b<=d) printf("Rezultantni interval je [%g,%g].",a,b);
	if(c>=a && d<=b) printf("Rezultantni interval je [%g,%g].",c,d);
	if(c>a && c<=b && d>b) printf("Rezultantni interval je [%g,%g].",c,b);
	if(a>c && a<=b && b>d) printf("Rezultantni interval je [%g,%g].",a,d);
	return 0;
}
