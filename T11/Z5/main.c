#include <stdio.h>
#include <math.h>
struct Vrijeme {
	int sati;
	int minute;
	int sekunde;
	
};
struct Vrijeme unos_vremena() {
	struct Vrijeme v;
	scanf("%d %d %d",&v.sati, &v.minute, &v.sekunde);
	return v;
}
struct Vrijeme proteklo(struct Vrijeme v1, struct Vrijeme v2){
	struct Vrijeme razlika;
	int sekunde1, sekunde2, razlikasekunde;
	sekunde1=v1.sati*3600 + v1.minute*60 + v1.sekunde;
	sekunde2=v2.sati*3600 + v2.minute*60 + v2.sekunde;
	razlikasekunde=fabs(sekunde2-sekunde1);
	razlika.sati=razlikasekunde/3600;
	razlikasekunde=razlikasekunde%3600;
	razlika.minute=razlikasekunde/60;
	razlika.sekunde=razlikasekunde%60;
	return razlika;
}
int main() {
	struct Vrijeme v1,v2,razlika;
	printf("Unesite prvo vrijeme (h m s): ");
	v1=unos_vremena();
	printf("\nUnesite drugo vrijeme (h m s): ");
	v2=unos_vremena();
	razlika=proteklo(v1, v2);
	printf("\nIzmedju dva vremena je proteklo %d sati, %d minuta i %d sekundi.", razlika.sati,razlika.minute,razlika.sekunde);
	return 0;
}
