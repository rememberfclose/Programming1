#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, n, poz=0, neg=0;

	scanf ("%d", &n);

	while (n>0)
	{
		scanf("%d", &x);

		if (x>0)
		{
			poz+=x;
		}
		else { neg+=x;}


		n--;
	}

	printf("pozitvni %d\n negativni %d\n", poz, neg);


	return 0;
}