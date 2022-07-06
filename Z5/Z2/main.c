#include <stdio.h>
#include <math.h>
struct Tacka {

	double x,y;
};
struct Kruznica {
	struct Tacka centar;
	double poluprecnik;
};
struct Kvadrat {
	struct Tacka dl;
	double stranica;
	
};

int izbaci_visak(struct Kruznica* kr, int velkr, struct Kvadrat* kv, int velkv )
{

	struct Tacka gl[100],gd[100],dd[100];
	int i;
	
	for(i=0;i<velkv;i++)
	{
		dd[i].x=kv[i].dl.x+kv[i].stranica;
		dd[i].y=kv[i].dl.y;
		gl[i].x=kv[i].dl.x;
		gl[i].y=kv[i].dl.y+kv[i].stranica;
		gd[i].y=gl[i].y;
		gd[i].x=gl[i].x+kv[i].stranica;
		
		
	}
	int niz[100];
	struct Kruznica* q=kr;
	struct Kvadrat* p=kv;
	i=0;
	while(p<kv+velkv)
	{
	
		int pripada=0;
		while(q<kr+velkr)
		{
			
			if(sqrt((q->centar.x-p->dl.x)*(q->centar.x-p->dl.x)+(q->centar.y-p->dl.y)*(q->centar.y-p->dl.y))<=q->poluprecnik
			&& sqrt((q->centar.x-dd[i].x)*(q->centar.x-dd[i].x)+(q->centar.y-dd[i].y)*(q->centar.y-dd[i].y))<=q->poluprecnik
			&& sqrt((q->centar.x-gl[i].x)*(q->centar.x-gl[i].x)+(q->centar.y-gl[i].y)*(q->centar.y-gl[i].y))<=q->poluprecnik
			&& sqrt((q->centar.x-gd[i].x)*(q->centar.x-gd[i].x)+(q->centar.y-gd[i].y)*(q->centar.y-gd[i].y))<=q->poluprecnik)
			{pripada=1;
			break;}
			
			
			
			q++;
		}

		if (pripada==0) { niz[i]=0; }
		else niz[i]=1;
			
		i++;
		
		
		
		
		p++;
	}
	int j;
	p=kv;
	i=0;
	struct Kvadrat* pom=kv;
	while(p<velkv+kv)
	{
		if(niz[i]==0)
		{
			for(pom=p;pom<velkv+kv-1;pom++)
			{p->dl=(p+1)->dl;
			p->stranica=(p+1)->stranica;
			}
			p--;
			velkv--;
			
		}
		i++;
		p++;
	}
	
	
	return velkv;
}

