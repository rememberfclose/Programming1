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



int main()
{

	char c, s[100];

	scanf("%c %s", &c, s);
	if(strchr_klon(s, c))
	printf("sadrzi\n");
	else
 	printf("ne sadrzi\n");


	return 0;
}