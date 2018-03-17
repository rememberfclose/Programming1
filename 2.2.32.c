#include <stdio.h>
#include <stdlib.h>
int main()
{

	int x;

	scanf("%d", &x);

	while (x!=1)
	{
		if (x%2==0)
		{
			x=x/2;
		}
		else {
			x=(3*x+1)/2;
		}

		printf("%d\n", x);


	}



	return 0;
}