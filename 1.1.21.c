#include <stdio.h>

int main ()

{
	float a, b;
	printf("Unesi velicinu strana pravouganika\n");
	scanf("%f %f", &a, &b);
	printf("Obim:%.2f\nPovrs:%.2f\n", 2*a+2*b, a*b);
	

return 0;
}

