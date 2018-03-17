#include <stdio.h>
#include <stdlib.h>
int main()
{

	float novac, broj_artikla, cena, ispis=0;

	scanf ("%f", &novac);
	scanf ("%f", &broj_artikla);

	while (broj_artikla>0)
	{
		scanf("%f", &cena);
		if (cena<=novac)
		{
			ispis++;
		}


		broj_artikla--;
	}
	printf("%.0f\n", ispis);

	return 0;
}