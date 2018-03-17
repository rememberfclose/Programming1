#include <stdio.h>
#include <stdlib.h>
int main()
{
	int broj, cifra, a;

	scanf("%d", &broj);

	while (broj>0)
	{
		a=broj/10;
		cifra=broj-a*10;
		broj=(broj-cifra)/10;
		printf("%d ", cifra);

	}


	return 0;
}