#include <stdio.h>
#include <stdlib.h>
int main()
{

	unsigned a, b, pom;

	scanf("%u %u", &a, &b);

	if (a<b)
	{
		pom=a;
		a=b;
		pom=b;
	}

	while (b!=0)
	{
		pom=a%b;
		a=b;
		b=pom;

	}

	printf("%d\n", a);

	return 0;
}