#include <stdio.h>

int main() {
	float VT, MT, CVT, CMT, UVT, UMT;
	printf("\n Unesi potrosnju elektricne energije po velikoj tarifi i cijenu velike tarife po kWh.\n");
	scanf("%f %f", &VT, &CVT);
	printf("\n Unesi potrosnju elektricne energije po maloj tarifi i cijenu male tarife po kWh.\n");
	scanf("%f %f", &MT, &CMT);
	UVT=(VT/(VT+MT)*100);
	UMT=(MT/(VT+MT)*100);
	printf("Ukupna potrosnja je %.2f.\n", VT+MT); 
	printf("Udio velike tarife u ukupnoj potrosnji je %.2f %%.\n", UVT); 
	printf("Udio male tarife u ukupnoj potrosnji je %.2f %%.\n", UMT );
	printf("Iznos racuna je %.2f KM.", CVT*VT+CMT*MT);
	
	return 0;
}
