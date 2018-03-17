#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{	int i;
	char c;
	FILE *ulaz;
	ulaz=fopen("ulaz.txt", "r");

	for(i=0;(c=fgetc(ulaz))!=EOF;)
	{
			if(islower(c))
			i++;
	}

	printf("%d\n", i);

	return 0;
}