#include <stdio.h>
#include <stdlib.h>
int main()
{

	int i, j, n;

	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= 2*n-1; ++j)
		{
			if(i+j>2*n || i>j)
			printf(" ");
			else printf("*");
		

		}
		printf("\n");
	}


	return 0;
}