#include <stdio.h>
#include <stdlib.h>
int main()
{

	char c1, c2, c3;

	scanf("%c %c %c", &c1, &c2, &c3);

	
	if (c1==c2 && c2== c3)
	{

		printf("pobendik je %c\n", c1);
	}
	else {

		printf("nema pobendika\n");
	}

	return 0;
}