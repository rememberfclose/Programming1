#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float x;
	int rez;
	double temp;
	scanf("%f", &x);
	
	temp=fabs(x)-fabs((int)x);
	rez=temp*10.0;

	printf("%d\n", rez);
	return 0;
}