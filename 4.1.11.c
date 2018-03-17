
#include <stdio.h>
#include <stdlib.h>
int main()
{

	FILE * ulaz;

	ulaz=fopen("brojevi.txt", "r");

	double max, niz[100];

	fscanf(ulaz, "%lf ", &niz[0]);
	max=niz[0];
	for (int i = 1; (fscanf(ulaz, "%lf ", &niz[i]))==1; ++i)
	{
		if(niz[i]>max)
			max=niz[i];
	}
	
	fprintf(stdout, "%lf\n", max);
	fclose(ulaz);
	return 0;
}