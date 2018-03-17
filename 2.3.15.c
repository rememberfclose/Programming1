#include <stdio.h>
#include <stdlib.h>
int scp(int x)
{	int temp;
	while(x)
	{
		temp=x%10;
		if (temp%2!=0)
		{
			return 0;
		}

		x/=10;
	}

	return 1;
}
int sci(int x)
{
	int k1, k2;
	while(x)
	{
		k1=x%10;
		k2=(x/10)%10;
		if (k1==0 || k2==0)
		{
			return 1;
		}
		if (k1!=k2)
		{
			return 0;
		}
		x/=10;
	}
	return 1;
}


int main()
{

	int k;
	scanf("%d", &k);
	if (scp(k))
	{
		printf("sve su parne\n");
	}
	else {printf("nisu sve parne\n");}
		if (sci(k))
	{
		printf("sve su iste\n");
	}
	else {printf("nisu sve iste\n");}
	


	return 0;
}