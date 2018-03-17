#include <stdio.h>
#include <stdlib.h>
int pojav(char rec[], char linija[])
{
	int i=0, n=0, j;
	for (int i = 0; linija[i]!='\0'; ++i)
	{	if(linija[i]==rec[0])
		{	for (int j = 0; 1; ++j)
			{
					if (rec[j]=='\0')
					{
						n++; break;
					}
				if(rec[j]==linija[j+i])
					continue;
				else break;
			}
		}
	}


return n;
}
int main(int argc, char *argv[])
{
	FILE* ulaz, *izlaz;
	int n;
	char rec[20], linija[100];
	ulaz=fopen(argv[1],"r");
	izlaz=fopen(argv[2],"w");
	fscanf(stdin,"%d", &n);
	fscanf(ulaz,"%s", rec);
	while(fgets(linija, 100, ulaz))
	if (pojav(rec, linija)>=n)
		{
			fprintf(izlaz, "%d; %s\n", pojav(rec,linija), linija);
		}	

		fclose(ulaz);
		fclose(izlaz);

	return 0;
}