#include <stdio.h>
#include <ctype.h>

void konvertuj(char s[])
{
	int i;

	for(i=0;s[i]!='\0';i++)
	{	if(islower(s[i]))
		s[i]=toupper(s[i]);
		else if(isupper(s[i]))
		s[i]=tolower(s[i]);

	}





}


int main()
{
	char s[11];
	scanf("%s", s);
	konvertuj(s);
	
	printf("%s\n", s);


	return 0;
}