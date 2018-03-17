#include <stdio.h>
#include <stdlib.h>
int main()
{

	int a, b, x, test;

	scanf("%d %d %d", &a, &b, &x);
	if (x>9 || x<0 || b<a)
	{
		printf("greska\n");
	}
	else
	{
		while(a<=b)
		{
			test=a%10;
			if (test%x==0)
			{
				printf("%d\n", a);
			}


			a++;
		}
	}


	return 0;
}