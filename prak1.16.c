#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	unsigned broj;
	unsigned char prva=0, poslednja=0;

	scanf("%u", &broj);
	if (broj<10)
	{
		printf("-1\n");
		return -1;
	}
	poslednja=broj%10;
	while(broj>9)
	{
		broj/=10;
		prva=broj%10;
	}
printf("%u \n", prva + poslednja);


	return 0;
}