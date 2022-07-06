#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001

int main() {
int i,j,m,n,k;
double srednja_vr,srednja_reda[100],srednja_kolone[100],mat[100][100],suma,suma_reda[100]={0},suma_kolone[100]={0};
suma=0;
do
{
	printf ("Unesite vrijednosti M i N: ");                                        /*M SU REDOVI A N KOLONE*/
	scanf ("%d %d",&m,&n);
	if (m<1 || m>100 || n<1 || n>100)
	printf ("Vrijednosti su van opsega!\n");
} while (m<1 || m>100 || n<1 || n>100);
printf ("Unesite clanove matrice: ");
for (i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
		scanf ("%lf", &mat[i][j]);
		suma=suma+mat[i][j];
		suma_reda[i]=suma_reda[i]+mat[i][j];
		/*printf ("suma reda je %.2f\n",suma_reda[i]);*/
		suma_kolone[j]=suma_kolone[j]+mat[i][j];
		/*srednja_redovi[i]=(srednja_redovi[i]+mat[i][j])/j;
		srednja_kolone[j]=(srednja_kolone[j]+mat[i][j])/i;*/
	}
	printf ("\n");
}
srednja_vr=suma/(i*j);
for (i=0;i<m;i++)
srednja_reda[i]=suma_reda[i]/n;
for (j=0;j<n;j++)
srednja_kolone[j]=suma_kolone[j]/m;
/*for (i=0;i<n;i++)
{
	printf ("srednja vr %d-tog reda je %.2f\n",i+1,srednja_reda[i]);
	printf ("srednja vr %d-te kolone je %.2f\n",i+1,srednja_kolone[i]);
}*/
for (i=0;i<m;i++)                              /*izbacivanje redova*/

{   
	
	if (srednja_reda[i]-srednja_vr>EPSILON)

	{   for (j=0;j<n;j++)
                suma_kolone[j]=suma_kolone[j]-mat[i][j];
        for(k=i;k<m-1;k++)
        {  srednja_reda[k]=srednja_reda[k+1];
		for (j=0;j<n;j++)
		{    
			
			mat[k][j]=mat[k+1][j];
		
		}}
    m--;
	i--;
	}
}
for (j=0;j<n;j++)
srednja_kolone[j]=suma_kolone[j]/m;

for (i=0;i<n;i++)                        /*izbacivanje kolona*/

{
	if (srednja_kolone[i]-srednja_vr>EPSILON)

	{    for (k=i;k<n-1;k++)
{ srednja_kolone[k]=srednja_kolone[k+1];
		for (j=0;j<m;j++)
		{
			mat[j][k]=mat[j][k+1];
			
			
		}}
n--;
	i--;
	}
}
printf ("Nakon izbacivanja matrica glasi:\n");
for (i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{   if (j==0)
		printf ("%6.1f ", mat[i][j]);
		else printf ("%5.1f ", mat[i][j]);
	}	
	printf ("\n");
}
	return 0;
}
