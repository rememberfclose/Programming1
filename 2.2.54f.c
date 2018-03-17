#include <stdio.h>

void main()
{
	int i, j, n;
	char c;

	scanf("%d %c", &n, &c);


	for (i = 1; i <=n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{	
			if (i==j || j==1 || i==n)
			{
				printf("%c", c);
			}
			else printf(" ");
			
		}
		printf("\n");
	}



}