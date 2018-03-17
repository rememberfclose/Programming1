#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned poletanje, poletanje_sat, poletanje_minut;
	unsigned sletanje, sletanje_sat, sletanje_minut;
	unsigned duzina, duzina_sat, duzina_minut;

	printf("unesi sate i minute poletanja\n");
	scanf("%d %d", &poletanje_sat, &poletanje_minut);
	printf("unesi sate i minute sletanja\n");
	scanf("%d %d", &sletanje_sat, &sletanje_minut);

	poletanje=poletanje_sat*3600+poletanje_minut*60;
	sletanje=sletanje_sat*3600+sletanje_minut*60;

	duzina=sletanje-poletanje;

	duzina_sat=duzina/3600;
	duzina_minut=(duzina%3600)/60;

	printf("let traje:%d : %d \n", duzina_sat, duzina_minut);


	return 0;
}