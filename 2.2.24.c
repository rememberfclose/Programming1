#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, broj, prva, max=0, stek, najv_broj;

	scanf("%d", &n);

	while(n>0)
	{
		scanf ("%d", &broj);
		stek=broj;
		while(broj>10)
		{
			
			broj=broj/10;

		}
		

		if (broj>max)
		{
			max=broj;
			najv_broj=stek;
		}


		n--;
	}
	printf("%d\n", najv_broj);

	return 0;
}