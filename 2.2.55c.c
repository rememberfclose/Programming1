#include <stdio.h>
#include <stdlib.h>
int main()
{

	int i, j, n;

	scanf("%d", &n);

	for (int i = 1; i <= 2*n-1; ++i)
	{
		for (int j = 1; j <= 2*n-1; ++j)
		{	
			if(i+j<=n || j-i>=n || i-j>=n || i+j>3*n-1)
				printf(" ");
			else
			printf("*");
			

		}
		printf("\n");
	}


	return 0;
}