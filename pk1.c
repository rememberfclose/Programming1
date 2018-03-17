#include <stdio.h>

int main ()
{
	float a, b, c, minimum, zbir, azbir;

	printf("Unesite brojeve\n");
	scanf("%f %f %f", &a, &b, &c);
	zbir=a+b+c;
	printf("Zbir:%.2f\n", zbir);
	if (zbir<0)
	{
		azbir=-zbir;
	}
	else azbir=zbir;
	printf("Apsolutan zbir %.2f\n", azbir);
	if(a<b && a<c)
		minimum=a;
	else if(b<a && b<c)
		minimum=b;
	else minimum=c;
	printf("Minimum je %.2f", minimum);















	return 0;
}