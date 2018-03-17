#include <stdio.h>
#include <ctype.h>
int heksa(char s[])
{	int i;
	if(s[0]=='0' && (s[1]=='x' || s[1]=='X'))
	{	if (s[2]=='\0')
	{
		return 0;
	}
		for(i=2; s[i]!='\0'; i++)
		{
			if(!((s[i]>='a' && s[i]<='f') || (s[i]>='A' && s[i]<='F')) && !isdigit(s[i]))
				return 0;
		}
		return 1;



	}
	return 0;







}

int main()
{

	char s[7];
	scanf("%s", s);
	if(heksa(s))
	printf("dobar haksa\n");
	else
		printf("los heksa\n");


	return 0;
}