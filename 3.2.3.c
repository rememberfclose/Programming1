#include <stdio.h>
#include <stdlib.h>
int sek(float k1, float n1, float k2, float n2, float* x, float *y)
{
	if(k1==k2)
		return 0;
	*x=(n2-n1)/(k1-k2);
	*y=(n2-n1)/(k1-k2)*(*x)+n1;
}
int main()
{
	float k1, k2, n1, n2;
	float y;
	float x;
	scanf("%f %f %f %f", &k1, &n1, &k2, &n2);
	if(sek(k1, n1, k2, n2, &x, &y))
		printf("seku se u %.2f %.2f\n", x, y);
	else
		printf("paralelne su\n");

	return 0;
}