#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	int i, j;
	int zbir=0;
	int brojac=0;
	for(i=1; i<argc; i++)
	{
		for(j=0; argv[i][j]!='\0';j++)
		{
		if(argv[i][j]=='z' || argv[i][j]=='Z')
			{brojac++;
			break;
			}
		}
	}
	printf("%d\n", brojac);
}
