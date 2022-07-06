#include <stdio.h>

int main() 
{
	int d,m;
	printf("Dan: ");
	scanf("%d",&d);
	printf("Mjesec: ");
	scanf("%d",&m);
	if(m==1)
	{
		if (d>=20) printf("Vas znak je Vodolija!");
		else printf ("Vas znak je Jarac!");
		
	}
	if(m==2)
	{  
		if (d<=18) printf("Vas znak je Vodolija!");
		else printf ("Vas znak je Ribe!");
		
	}
	if(m==3)
	{  
		if (d<=20) printf("Vas znak je Riba!");
		else printf ("Vas znak je Ovan!");
		
	}
	if(m==4)
	{  
		if (d<=19) printf("Vas znak je Ovan!");
		else printf ("Vas znak je Bik!");
		
	}
	if(m==5)
	{  
		if (d<=20) printf("Vas znak je Bik!");
		else printf ("Vas znak je Blizanci!");
		
	}
	if(m==6)
	{  
		if (d<=20) printf("Vas znak je Blizanci!");
		else printf ("Vas znak je Rak!");
		
	}
	if(m==7)
	{  
		if (d<=22) printf("Vas znak je Rak!");
		else printf ("Vas znak je Lav!");
		
	}
	if(m==8)
	{  
		if (d<=22) printf("Vas znak je Lav!");
		else printf ("Vas znak je Djevica!");
		
	}
	if(m==9)
	{  
		if (d<=22) printf("Vas znak je Djevica!");
		else printf ("Vas znak je Vaga!");
		
	}
	if(m==10)
	{  
		if (d<=22) printf("Vas znak je Vaga!");
		else printf ("Vas znak je Skorpija!");
		
	}
	if(m==11)
	{  
		if (d<=21) printf("Vas znak je Skorpija!");
		else printf ("Vas znak je Strijelac!");
		
	}
	if(m==12)
	{  
		if (d<=21) printf("Vas znak je Strijelac!");
		else printf ("Vas znak je Jarac!");
		
	}
	return 0;
}
