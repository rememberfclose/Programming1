#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, broj, max, d, max_broj;

	scanf("%d", &n);

	max=0;
	while(n>0)
	{
		scanf("%d", &broj);
		d=(broj/10)%10;
		if (d>max)
		{
			max=d;
			max_broj=broj;
		}

		n--;
	}

	printf("%d\n", max_broj);
	return 0;
}