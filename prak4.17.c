#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char* argv[])
{

	FILE *ulaz, *izlaz;

	ulaz=fopen(argv[1], "r");
	izlaz=fopen("sifrovana.txt", "w");
	int x=atoi(argv[2]);
	char c, novi;
	while(1)
	{	c=fgetc(ulaz);
		if(c==EOF)break;
		novi=c+x;
		if(!isascii(novi))
		{	
			novi=x-128+(int)c;

		}
		

	fprintf(izlaz, "%c", novi);

	}

	return 0;
}