#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int cifre(int a)
{
	int i=0;
	do{i++; a/=10;}while(a);
	return i;


}

int main(int argc, char *argv[])
{
	FILE *ulaz, *izlaz;
	int n, k, rez, i, temp;
	ulaz=fopen(argv[1], "r");
	izlaz=fopen("izlaz", "w");
	fscanf(ulaz,"%d",&n);
	k=atoi(argv[2]);
	for (int i = 0; i < n; ++i)
	{
		fscanf(ulaz,"%d",&temp);
		if(cifre(temp)==k)
			{rez++;
			fprintf(izlaz, "%d\n", temp);
			}
	}
	printf("%d\n", rez);

	fclose(ulaz);
	fclose(izlaz);
	return 0;
}