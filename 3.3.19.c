#include <stdio.h>
#include <string.h>

int ucitaj(char s[])
{	int i=0;
	scanf("%[^\n]s", s);
	while(s[i]!='\0')
	{
		i++;
	}
	return i;

}



int main()
{	int p,j=0;
	char niska[80], pobednik[80];
	int najveca, y;
	y=ucitaj(niska);
	strcpy(pobednik, niska);
	najveca=y;
	while((niska[j++]=getchar())!=EOF)
	{
		y=ucitaj(niska);
		if (y>najveca)
		{	strcpy(pobednik, niska);
			najveca=y;
		}

	}
	printf("\nova lajna\n");
	printf("%s\n", pobednik);
	printf("%d\n", najveca);
	


	return 0;
}