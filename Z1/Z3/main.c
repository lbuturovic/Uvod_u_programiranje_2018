#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define EPSILON 0.00001

int main() {
	double z=1200,s=15,n=70,vrz=0.00,vrs=0.00,vrn=0.00,novac=100000.00, k1,k2,k3,uk1,uk2,uk3;
	int i,ukz=0,uks=0,ukn=0,izbor,nizbor,kz=0,ks=0,kn=0;
	srand(0);
	int r1=rand()%2;
	int r2=rand()%2;
	int r3=rand()%2;
	if (r1==0) k1=-0.1; else k1=0.1;
	if (r2==0) k2=-0.1; else k2=0.1;
	if (r3==0) k3=-0.1; else k3=0.1;
	uk1=k1; uk2=k2; uk3=k3;
	for(i=0;i<=4;i++)
	{
		if(i==0) printf("PON: ");
		if(i==1) printf("UTO: ");
		if(i==2) printf("SRI: ");
		if(i==3) printf("CET: ");
		if(i==4) printf("PET: ");
		z=z+(z*uk1/100);
		s=s+(s*uk2/100);
		n=n+(n*uk3/100);
		printf("Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",z,uk1,s,uk2,n,uk3);
		r1=rand()%2;
		r2=rand()%2;
		r3=rand()%2;
		if(r1==0) k1=-0.1; else k1=0.1;
		if(r2==0) k2=-0.1; else k2=0.1;
		if(r3==0) k3=-0.1; else k3=0.1;
		uk1+=k1; uk2+=k2; uk3+=k3;
	}
	POCETAK:	printf("\n");
		printf("Imate:\n");
		printf("Zlata: %d ($%.2f) Srebra: %d ($%.2f) Nafte: %d ($%.2f) Novca: $%.2f",ukz,vrz,uks,vrs,ukn,vrn,novac);
		printf("\nUKUPNO: $%.2f ($%+.2f)\n", vrz+vrs+vrn+novac,(vrz+vrs+vrn+novac)-100000);

		do
		{
		do
		{
			printf("\n");
			printf("\nUnesite izbor (1 - Kupi, 2 - Prodaj, 3 - Sljedeca sedmica, 0 - Kraj igre): ");
			scanf("%d",&izbor);
			if (izbor!=1 && izbor!=2 && izbor!=3 && izbor!=0) 
			{
				printf("Pogresan izbor!\n");
				printf("\nImate:\n");
				printf("Zlata: %d ($%.2f) Srebra: %d ($%.2f) Nafte: %d ($%.2f) Novca: $%.2f\n",kz,vrz,ks,vrs,kn,vrn,novac);
				printf("UKUPNO: $%.2f ($%+.2f)\n",(vrz+vrs+vrn+novac),(vrz+vrs+vrn+novac)-100000);
				printf("\n");
			}
		}
		while(izbor!=1 && izbor!=2 && izbor!=3 && izbor!=0);
	
	    if (izbor==0) break;
		if(izbor==1)
		{
			printf("Sta kupujete (1 - Zlato, 2 - Srebro, 3 - Naftu): ");
			scanf("%d",&nizbor);
			printf("Koliko? ");
			if(nizbor==1)
			{   
		
				scanf("%d",&kz);
				if(kz*z>novac) 
				{
					printf("Nemate toliko novca!\n");
					goto POCETAK;
					
				}
				
				vrz+=kz*z;
				novac=novac-kz*z;
				ukz+=kz;
				
			}
			if(nizbor==2) 
			
			{
				scanf("%d",&ks);
				if(ks*s>novac) 
				{
		            printf("Nemate toliko novca!\n");
					goto POCETAK;
					
				}
				vrs+=ks*s;
				novac=novac-ks*s;
				uks+=ks;
			}
			if(nizbor==3) 
			{
			
				scanf("%d",&kn);
				if(kn*n>novac) 
				{
					printf("Nemate toliko novca!\n");
					goto POCETAK;
				}
				vrn+=kn*n;
				novac=novac-kn*n;
				ukn+=kn;
				
			}
			printf("\nImate:\n");
			printf("Zlata: %d ($%.2f) Srebra: %d ($%.2f) Nafte: %d ($%.2f) Novca: $%.2f\n",ukz,vrz,uks,vrs,ukn,vrn,novac);
			printf("UKUPNO: $%.2f ($%+.2f)\n",vrz+vrs+vrn+novac, (vrz+vrs+vrn+novac)-100000);
		}
		if(izbor==2)
		{
			printf("Sta prodajete (1 - Zlato, 2 - Srebro, 3 - Naftu): ");
			scanf("%d",&nizbor);
			printf("Koliko? ");
			if(nizbor==1)
			{
				scanf("%d",&kz);
				if(kz>ukz)
				{
					printf("Nemate toliko zlata!\n");
					goto POCETAK;
				}
				vrz=vrz-kz*z;
				novac=novac+kz*z;
				ukz-=kz;
				
			}
			if(nizbor==2)
			{
				scanf("%d",&ks);
				if(ks>uks)
				{
					printf("Nemate toliko srebra!\n");
					goto POCETAK;
				}
				vrs=vrs-ks*s;
				novac=novac+ks*s;
				uks-=ks;
			}
			if(nizbor==3)
			{
				scanf("%d",&kn);
				if(kn>ukn)
				{
					printf("Nemate toliko nafte!\n");
					goto POCETAK;
				}
				vrn=vrn-kn*n;
				novac=novac+kn*n;
				ukn-=kn;
			}
			printf("\nImate:\n");
			printf("Zlata: %d ($%.2f) Srebra: %d ($%.2f) Nafte: %d ($%.2f) Novca: $%.2f\n",ukz,vrz,uks,vrs,ukn,vrn,novac);
			printf("UKUPNO: $%.2f ($%+.2f)\n", vrz+vrs+vrn+novac, (vrz+vrs+vrn+novac)-100000);
		}
		  if(izbor==3)
		  {
		  	
		  	printf("\n");
		  	for(i=0;i<=4;i++)
		  	{
		  		r1=rand()%2;
		  		r2=rand()%2;
		  		r3=rand()%2;
		  		if(r1==0) k1=-0.1; else k1=0.1;
		  		if(r2==0) k2=-0.1; else k2=0.1;
		  		if(r3==0) k3=-0.1; else k3=0.1;
		  		
		  		if(i==0) printf("PON: ");
		  		if(i==1) printf("UTO: ");
		  		if(i==2) printf("SRI: ");
		  		if(i==3) printf("CET: ");
		  		if(i==4) printf("PET: ");
		  		z=z+(z*uk1/100);
		  		s=s+(s*uk2/100);
		  		n=n+(n*uk3/100);
		  	
		  		printf ("Zlato $%.2f",z);
		  		if (fabs(uk1-0.00)<EPSILON) printf (" (+0.0) "); else printf(" (%+.1f) ",uk1);
		  		printf ("Srebro $%.2f",s);
		  		if(fabs(uk2-0.00)<EPSILON) printf(" (+0.0) "); else printf(" (%+.1f) ",uk2);
		  		printf("Nafta $%.2f",n);
		  		if (fabs(uk2-0.00)<EPSILON) printf(" (+0.0)\n"); else printf(" (%+.1f)\n",uk3);
		  			
		  		
		  		uk1+=k1;uk2+=k2;uk3+=k3;
		  		
		  	}
		  	vrz=ukz*z; vrs=uks*s; vrn=ukn*n;
		  	printf("\nImate:\n");
		  	printf("Zlata: %d ($%.2f) Srebra: %d ($%.2f) Nafte: %d ($%.2f) Novca: $%.2f\n",ukz,vrz,uks,vrs,ukn,vrn,novac);
		  	printf("UKUPNO: $%.2f ($%+.2f)\n",vrz+vrs+vrn+novac,(vrz+vrs+vrn+novac)-100000);
		  	}
		  	
		
		  }
		
		while(izbor!=0);
		
	return 0;
}
