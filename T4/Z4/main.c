#include <stdio.h>

int main() {
	int mj,god,a=28;
	printf("Unesite mjesec: ");
	scanf("%d",&mj);
	printf("Unesite godinu: ");
	scanf("%d",&god);
	switch(mj)
	{
     case 1:
     printf("Januar %d, broj dana: 31",god);
     break;
     
	case 2:
	 
	 	if(god%4==0) a=29;
     printf("Februar %d, broj dana: %d",god,a);
     break;
	 	
    case 3:
     printf("Mart %d, broj dana: 31",god);
     break;
     
     case 4:
     printf("April %d, broj dana: 30",god);
     break;
     
     case 5:
     printf("Maj %d, broj dana: 31",god);
     break;
     
     case 6:
     printf("Juni %d, broj dana: 30",god);
     break;
     
     case 7:
     printf("Juli %d, broj dana: 31",god);
     break;
     
     case 8:
     printf("Avgust %d, broj dana: 31",god);
     break;
     
     case 9:
     printf("Septembar %d, broj dana: 30",god);
     break;
     
     case 10:
     printf("Oktobar %d, broj dana: 31",god);
     break;
     
     case 11:
     printf("Novembar %d, broj dana: 30",god);
     break;
     
     case 12:
     printf("Decembar %d, broj dana: 31",god);
     break;
     
	}
	return 0;
}
