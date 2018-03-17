#include <stdio.h>
#include <math.h>
int main()
{

	double a;

	printf("unesite duzinu stranice jednakostranicnog trougla:\n");
	scanf("%lf", &a);
	printf("povrs:%.2lf\n obim: %.2lf\n", (a*a*sqrt(3)*0.25), a*3 );

	return 0;
}