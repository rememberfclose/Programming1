#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct raz{ int p; int q;};


int main(int argc, char *argv[])
{	struct raz fracs[100];
	FILE *ulaz, *izlaz;
	ulaz=fopen(argv[1], "r");
	izlaz=fopen(argv[2], "w");
	int n;
	fscanf(ulaz, "%d", &n);
	for (int i = 0; i < n; ++i)
	{
		fscanf(ulaz, "%d/%d",&fracs[i].p, &fracs[i].q);
	}
	if (strcmp("x", argv[3])==0)
	{
		for (int i = 0; i < n; ++i)
		{
			fprintf(izlaz,"%d/%d\n", fracs[i].q, fracs[i].p);
		}
	}
	if (strcmp("y", argv[3])==0)
	{	for (int i = 0; i < n; ++i)
		{
			fprintf(izlaz,"%f\n", (double)fracs[i].q/fracs[i].p);
		}
	}

	return 0;
}