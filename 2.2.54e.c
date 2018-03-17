#include <stdio.h>

void main()
{
	int i, j, n;

	scanf("%d", &n);

	for (int i = 1; i < 2*n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{	if (j<=i && i+j<=2*n)
		{
			printf("*");
		}
		
			
		}
		printf("\n");
	}





}