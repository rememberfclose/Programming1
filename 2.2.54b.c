#include <stdio.h>
#include <stdlib.h>
int main()
{

	int i, j, n;

	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if(j<=i)
			printf("*");

		}
		printf("\n");
	}


	return 0;
}