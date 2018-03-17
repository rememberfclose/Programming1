#include <stdio.h>



int main()
{
	float m, km;

	printf("Unesite duzinu u miljama\n");
	scanf("%f", &m);
	km=m*1.609344;
	printf("U kilometrima je to: %.2f", km);
	return 0;
}