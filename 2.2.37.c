#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, k=1, g;
	char c;

	scanf("%d", &n);
	g=2*n;
	while(g>0)
	{
		scanf("%c", &c);
		if (c=='Z')
		{
			k=k*2;
		}
		if (c=='i')
		{
			k=k*3;
		}
		if (c=='m')
		{
			k=k*5;
		}
		if (c=='a')
		{
			k=k*7;
		}

		g--;
	}

	if (k%2*3*5*7==0)
	{
		printf("moze\n");
	}
	else {printf("nemoze\n");}

	return 0;
}