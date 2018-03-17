#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s[100];
	int i=0, p;

	while(1)
	{scanf("%c ", &s[i]);
	if(s[i]=='*')
		break;
	i++;	}

	p=i;
	for (i=p; i >= 0; --i)
	{
	printf("%c", s[i]);
	}
	
	

	return 0;
}