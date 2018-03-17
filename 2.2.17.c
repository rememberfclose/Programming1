#include <stdio.h>
#include <stdlib.h>
int main()
{
	int broj;
	scanf("%d", &broj);

	while (broj!=0)
	{
	if (broj%5==0 && broj%10!=0 && broj%100!=0 && broj%1000!=0 && broj%10000!=0 && broj%100000!=0)
	{
		printf("sadrzi 5\n");
		return 0;
	}
	else
	{broj=broj/10;}
	}
	printf("ne sadrzi\n");


	return 0;
}