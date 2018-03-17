#include <stdio.h>
#include <string.h>
#include <ctype.h>
void skrati(char s[])
{
	int n, i;
	n=strlen(s)-1;
	while(n>=0 && isspace(s[n]))
		n--;
	
	s[n+1]='\0';
}


int main()
{
	char niska[100];
	int i=0;
	scanf("%s", niska);
	skrati(niska);
	printf("*%s*\n", niska);


	return 0;
}