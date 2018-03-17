#include <stdio.h>

int main()
{
	int i, j, n;
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		for(j=1;j<=n; j++)
		{
				if(j>i && i+j<n+1 || i+j>n+1 && i>j)
				printf(" ");
				else printf("*");

		}
		printf("\n");


	}






	return 0;
}