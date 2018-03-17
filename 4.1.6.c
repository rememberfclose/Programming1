#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct cc 
	{ 
	unsigned cena; 
	char marka[30];
	char model[30];
	unsigned prosek;
	};

int main(int argc, char *argv[])
{	
	FILE* ulaz;
	int n, k, j;
	int brojilac=0, zbir=0;
	unsigned max;
	max=atoi(argv[2]);
	char help[30];
	struct cc kola[100], pom[100], pom1[100];
	ulaz=fopen(argv[1], "r");
	fscanf(ulaz,"%d", &n);
	for (int i = 0; i < n; ++i)
	{
		fscanf(ulaz, "%s %s %u", kola[i].marka, kola[i].model, &kola[i].cena);
		strcpy(pom[i].marka, kola[i].marka);
		strcpy(pom[i].model, kola[i].model);
		pom[i].cena=kola[i].cena;
		strcpy(pom1[i].marka, kola[i].marka);
		strcpy(pom1[i].model, kola[i].model);
		pom1[i].cena=kola[i].cena;
	}
	for (int i = 0; i < 3; ++i)
	{
		help[i]='i';
	}
printf("prosecna cena po marki\n");
	for (int i = 0; i < n; ++i)
	{	zbir=0;
		brojilac=0;
		
		for (int j = 0; j < n; ++j)
		{
			if(strcmp(kola[i].marka, pom[j].marka)==0 && strcmp(pom[j].marka, help)!=0)
				{
					
				brojilac++;
				zbir+=kola[j].cena;
				strcpy(pom[j].marka, help);
				}
				k=i;
				}
		if(zbir)
		{
			for (int i = 0; i < n; ++i)
			{
				if(strcmp(kola[i].marka, kola[k].marka)==0)
					kola[i].prosek=(float)zbir/brojilac;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{		
				if (strcmp(pom1[i].marka, help)!=0)
				{
				fprintf(stdout,"%s: %u\n", kola[i].marka, kola[i].prosek);
				
				}
			for(j=i+1;j<n;j++)
			{	if(strcmp(pom1[i].marka, pom1[j].marka)==0)
				strcpy(pom1[j].marka, help);
			}
	}
printf("----------------------------------------------\n");

	printf("Kola u rangu od %u evra:\n", max);
	for (int i = 0; i < n; ++i)
	{
		if (kola[i].cena<=max)
		{
			fprintf(stdout,"%s %s cena: %u prosecna cena marke: %u\n", kola[i].marka, kola[i].model, kola[i].cena, kola[i].prosek);
		}
	}
	return 0;
}