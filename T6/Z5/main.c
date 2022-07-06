#include <stdio.h>

int main() {
	int mat[10][10];
	int i,j,min;
	for(i=0;i<10;i++)
	{	for(j=0;j<10;j++)
		{
			scanf("%5d",&mat[i][j]);
		}
	printf("\n");
	}
	min=mat[0][0];
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
		{
			if (i==j && mat[i][j]<min)
			min=mat[i][j];
		}
	printf("%d",min);
	return 0;
}
