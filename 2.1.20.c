#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;

	printf("Unesi broj\n");
	scanf("%d", &a);
	if (a>0)
	{
		printf("Broj je veci od nule.\n");
	}
	else if (a<0)
	{
		printf("Broj je manji od nule.\n");
	}
	else { printf("Broj je nula.\n");}
	return 0;
}