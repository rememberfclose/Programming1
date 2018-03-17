#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int broj, cifra, stepen=0, novi=0;
	scanf("%d", &broj);
	while(1)
	{
		cifra=broj%10;
		broj=broj/10;
		if (cifra%2==0)
		{
			cifra++;
		}
		novi=novi+cifra*(pow(10, stepen));
		if (broj==0)
		{
			break;
		}


		stepen++;
	}
	printf("%d\n", novi);


	return 0;
}