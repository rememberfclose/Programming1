#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sat, minut, zbir, minut_ponoc, sat1, minut1;

	printf("Unesite sate i minute:\n");
	scanf("%d %d", &sat, &minut);
	zbir=(sat*60)+minut;
	minut_ponoc=1440-zbir;
	sat1=minut_ponoc/60;
	minut1=minut_ponoc-sat1*60;
	printf("Ima %d : %d do ponoci.\n", sat1, minut1);

	return 0;
}