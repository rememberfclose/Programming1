#include <stdio.h>
#include <math.h>
float razl(float x)
{
	x=fabs(x);
	int p=x;
	float q=x-p;
	return q;
}

int main()
{

	
	float a;

	scanf("%f", &a);

	printf("%f\n", razl(a));


	return 0;
}