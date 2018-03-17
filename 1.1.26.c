#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c, prosek;

	printf("Unesite tri cela broja\n");
	scanf("%f", &a);
	scanf("%f", &c);
	scanf("%f", &b);
	prosek=(a+b+c)/3.0f;
	printf("Prosek:%.2f\n", prosek );

	return 0;
}