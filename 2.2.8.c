#include <stdio.h>
#include <stdlib.h>
int main()
{
	int broj, del;

	scanf("%d", &broj);

	del=broj-1;

	while(del!=1)
	{
		if (broj%del==0)
		{
			printf("%d\n", del);
		}
		del--;



	}


	return 0;
}