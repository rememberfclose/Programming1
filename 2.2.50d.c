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
			if(j+i<=n+1)
			printf("(%i,%i) ", i-1, j-1);
		}
		printf("\n");
	}


	return 0;
}