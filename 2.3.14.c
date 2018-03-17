#include <stdio.h>
#include <stdlib.h>
int bnc(int x)
{	int i=0, temp;
	if (x<0)
	{
		x=-x;
	}

	while(x)
	{
		temp=x%10;
		if (temp%2!=0)
		{
			i++;
		}

		x/=10;
	}
	return i;
}


int main()
{

	int a=1;

	while (a!=0)
	{	
		
		scanf("%d", &a);
		if (a==0)
		{
			return 0;
		}
		printf("broj neparnih je %d\n", bnc(a));

	}	

	return 0;
}