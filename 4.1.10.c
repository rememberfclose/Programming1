#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kraj(char c[], char b[]){
	int i, brojac=0;
for(i=0;b[i]!='\0';i++)
	{	if (c[strlen(c)-strlen(b)+i]==b[i])
		{
			brojac++;
		}
	}
	if (brojac==strlen(b))
	{
		return 1;
	}
	else 
		return 0;


}



int main(int argc, char*argv[])
{

	FILE *ulaz;
	int i=0;
	ulaz=fopen("ulaz.txt", "r");
	int brojac=0;
	char c[100], b[100];
	while((fgets(c, 20, ulaz))!=NULL)
	{for (int i = 0; i < strlen(c); ++i)
	{
		if (c[i]=='\n')
		{
			c[i]='\0';
		}
	}
		if(kraj(c, argv[1]))
		brojac++;
	}
	printf("%d\n", brojac);
	return 0;
}