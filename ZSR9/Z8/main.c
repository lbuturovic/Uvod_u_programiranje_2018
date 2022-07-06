#include <stdio.h>
void Pretvori_u_mala(const char* s){
	int temp;
	while(*s!='\0')
	{
		temp=*s;
		if(temp>='A' && temp<='Z')
		temp+=32;
	}
}
int Da_li_Su_Ista_Slova(const char*s, const char* q)
{
	int temp1,temp2;
	temp1=*s;
	temp2=*q;
	if(temp1>='a' && temp1<='z') temp1=temp1-32;
	if(temp2>='a' && temp2<='z') temp2=temp2-32;
	if(temp1==temp2) return 1;
	return 0;
}
int Prebroji(const char* s, const char*q)
{
	int br=0;
	const char* pocetak=s;
	while(*q!='\0')
	{
		s=pocetak;
		while(*s!='\0')
		{
			if(Da_li_Su_Ista_Slova(s,q)) br++;
			s++;
		}
		
		
		q++;
	}
	
	
	return br;
	
}
int main()
{
	return 0;
}
