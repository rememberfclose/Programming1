#include <stdio.h>
#include <stdlib.h>
int main()
{

	char c, b;
	scanf("%c", &c);

	printf("%c %d\n", c, c);

	if (c>='A' && c<='Z')
	{
		b=c+32;
		printf("%c %d\n",b, b );
	}
	else {
		b=c-32;
		printf("%c %d\n", b, b );
	}

	return 0;
}