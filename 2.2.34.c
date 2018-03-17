#include <stdio.h>
#include <ctype.h>
int main()
{

	char c;

	while (1)
		{scanf("%c", &c);
	
		if (c=='.')
		{
			break;
		}
		else if (islower(c))
		{
			printf("%c", toupper(c));
		}
		else if (isupper(c))
		{
			printf("%c", tolower(c));
		}
		else {putchar(c);}
	}


	return 0;
}