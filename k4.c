#include <stdio.h>
#include <stdlib.h>
int main()
{

	int i, j, n;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i==j || i+j==n-1 || (i+j<n-1 && i>j) || (i+j>n-1 && i<j))
			printf("*");
			else
			printf(" ");
			
		}
		printf("\n");
	}


	return 0;
}