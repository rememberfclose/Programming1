#include <stdio.h>
#include <stdlib.h>
char* strchr_klon(char s[], char c)
{	int i;
	for(i=0; s[i]!='\0';i++)
	{
	if(s[i]==c)
		return &s[i];


	}
return 0;

}
int main(int argc, char* argv[])
{
	int i, j;
	for(i=0;argv[1][i]!='\0';i++)
	{
		if(strchr_klon(argv[2], argv[1][i]))
			;
		else
			break;
	}

	printf("%d\n", i);
	return 0;
}