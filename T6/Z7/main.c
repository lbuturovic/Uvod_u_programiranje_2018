#include <stdio.h>

int main() {
	int mat[10][10],i,j,min,max,r1=0,r2=0,pom=0;
	printf("Unesite elemente matrice: ");
		for(i=0;i<10;i++)
		{

		for(j=0;j<10;j++)
		{
			scanf("%d",&mat[i][j]);
			if(i==0 && j==0)
			{
				max=mat[i][j];
				min=mat[i][j];
			}
			if(mat[i][j]>max)
			{
				max=mat[i][j];
				r1=i;
			}
			if(mat[i][j]<min)
			{
				min=mat[i][j];
				r2=i;
			}
		}
		}
			if(r1==r2) {
			printf("Najmanji i najveci element se nalaze u istom redu."); 
			return 0;
				
			}
			else
			{
				for(j=0;j<10;j++)
				{
					pom=mat[r1][j];
					mat[r1][j]=mat[r2][j];
					mat[r2][j]=pom;
				}
				printf("Nakon zamjene matrica glasi: \n");
				for(i=0;i<10;i++)
					{
						for(j=0;j<10;j++)
						if(j==0) printf("%d",mat[i][j]);
						else printf("%2d",mat[i][j]);
					printf("\n");
				
				}
					}
		
	return 0;
}
