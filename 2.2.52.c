#include <stdio.h>
#include <stdlib.h>
int main()
{

	
	int i, j, n;

	scanf("%d", &n);
	n=n-1;

	for(i=0; i<=n; i++)
	{
		for(j=0; j<=n; j++){
			if (j==i || i+j==n)
			printf("*");
		else printf(" ");

		}
		printf("\n");
	}


	return 0;
}