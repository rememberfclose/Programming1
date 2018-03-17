#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* ulaz, *izlaz;
	char c[100];
	ulaz=fopen("ulaz.txt", "r");
	izlaz=fopen("izlaz.txt","w");
	
	for(int i=0;(c[i]=fgetc(ulaz))!=EOF;i++)
		{
			if(i%3==0)
			{
				fprintf(izlaz, "%c", c[i]);
			}
		
		}
	fclose(ulaz);
	fclose(izlaz);
	return 0;
}
