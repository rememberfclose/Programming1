#include <stdio.h>

void main()
{
	int i, j, k, m=1;

	scanf("%d", &k);

	for (int i = 1; i < k; ++i)
	{	int j = 1;
		do{
			printf("%d ", j);
			j=j+m;
		}while(j <= k);
				printf("\n");
		m++;
		
	}



printf("1\n");




}