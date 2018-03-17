#include <stdio.h>

void main()
{
	int i, j, k;

	scanf("%d", &k);

	for (int i = 1; i < k; ++i)
	{
		for (int j = i; j <= k+1-i; ++j)
		{
			printf("%d ", j);
		}
	}







}