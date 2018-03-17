#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, x1, x2;
	
	printf("Unesite a,b i c za ax^2 + bx +c = 0:\n");
	scanf("%f %f %f", &a, &b, &c);
	if ((b*b-4.0f*a*c)<0)
	{
		printf("Funkcija ima samo kompleksa resenja.\n");
	}
	else if ((b*b-4.0f*a*c)>0)
	{
		printf("Funkcija ima dva realna resenja.\n");
		x1=(-b+sqrt(b*b-4.0f*a*c))/(2*a);
		printf("prvo resenje je %.2f \n", x1);
		x2=(-b-sqrt(b*b-4.0f*a*c))/(2*a);
		printf("drugo resenje je %.2f \n", x2);
	}
	else {
		printf("Funkcija ima jedno realno resenje.\n");
		x1=(-b+sqrt(b*b-4.0f*a*c))/(2*a);
		printf("to resenje je %.2f \n", x1);
	}


	return 0;
}