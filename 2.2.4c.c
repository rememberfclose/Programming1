#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;

	scanf ("%d %d", &a, &b);

	do
	{
		printf("%d ", a);

		a++;
	}while (b>=a);



	return 0;
}