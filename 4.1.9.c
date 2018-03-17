#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int k;
	FILE *ulaz;
	ulaz=fopen(argv[1], "r");
	k=atoi(argv[2]);
	char c[80];
	
	for (int i = 0; i < 5; ++i)
	{
		fgets(&c[0], 80, ulaz);
		if(strlen(c)>k)
			printf("%s\n", c);
	}

	return 0;
}