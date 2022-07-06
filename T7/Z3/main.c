#include <stdio.h>
int prost(int x)
{
	if(x<=1) return 0;
	int i;
	for(i=2;i<x;i++)
	if(x%i==0) return 0;
	
	return 1;
	
	
}

int main() {
	int i;
	for(i=1;i<=100;i++)
	if(prost(i)) 
	{
	printf("%d",i);
	printf("\n");
	}
	
	return 0;
}
