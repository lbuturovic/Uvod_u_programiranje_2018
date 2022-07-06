#include <stdio.h>
int matrica_sadrzana(int A[100][100], int v1, int s1,int B[100][100],int v2, int s2)
{
	int i,j,k,l,br1,br2,istibroj=0;
	if(v2>v1 || s2>s1) return 0; /*ukoliko je druga unesena matrica sira ili duza od prve, ne moze biti podmatrica prve*/
	for(i=0; i<v1; i++)
		for(j=0; j<s1; j++) {
			if(A[i][j]==B[0][0]) {
				istibroj=1; /*ukoliko u matrici A postoji broj koji je jednak prvom elementu matrice B*/
				if(s1-j<s2 || v1-i<v2) return 0; /*ako matrica B "izlazi iz raspona" matrice A, ne moze biti podmatrica*/
				else {
					for(k=i,br1=0; k<v2+i && br1<v2; k++,br1++) /*ispitivanje da li su elementi matrice A pocevsi od onog koji je jednak prvom el B jednaki*/

						for(l=j,br2=0; l<s2+j && br2<s2; l++,br2++) {
							if(A[k][l]!=B[br1][br2]) return 0; /*ukoliko bar jedan element nije jednak B nije podmatrica od A*/
						}
					return 1; /*izvrsit ce se samo ako ne naidje na razlicit element tj. B je podmatrica od A*/
				}


			}



		}

	if(istibroj==0) return 0; /*ukoliko prvi element matrice B uopste nije u matrici A*/

    return 0;

}

int main()
{

	return 0;
}
