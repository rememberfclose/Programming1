#include <stdio.h>


int main()
{
	int x, max=0, t;
	printf("unesite ceo broj\n");
	scanf("%d", &x);

	while(x)
	{
		t=x%10;
		if(t>max && t%2!=0)
			max=t;



		x/=10;
	}

	if(max)
		printf("cifra je %d\n", max);
	else printf("nema parnih\n");



	return 0;
}