#include <stdio.h>

int main() {
	double mat[100][100],s=0;
	int i,j,a,b;
	printf("Unesite dimenzije matrice: ");
	scanf("%d %d",&a,&b);
	printf("Unesite elemente matrice: ");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%lf",&mat[i][j]);
		if(i==0 || i==a-1 ) s+=mat[i][j];
		if(j==0 || j==b-1) s+=mat[i][j];
		}
	}
	s=s-mat[0][0]-mat[0][b-1]-mat[a-1][0]-mat[a-1][b-1];
	printf("Suma elemenata na rubu je %.2f",s);
	return 0;
}
