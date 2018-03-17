#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, s, p, o;

	
	printf("Uneti strane trokuta\n");
	scanf("%f %f %f", &a, &b, &c);
	s=(a+b+c)/2.0f;
	p=sqrt((s)*(s-a)*(s-b)*(s-c));
	o=s*2.0f;
	printf("Obim je %.2f\nPovrs je %.2f\n", o, p );

	return 0;
}