#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100], b[100];;
	int x;
	int y;
	int i=0, j=0, p;
	scanf("%d %d", &x, &y);
	if (x<0)
		x=-x;
	if (y<0)
		y=-y;

	while(x)
	{	a[i]=x%10;
		x=x/10;
		
		i++;
	}
	while(y)
	{	b[j]=y%10;
		y=y/10;
		
		j++;
	}

	if (j!=i)
	{
		printf("ne moze\n");
		return 0;
	}
	p=i;
	for (i = 0; i < p; ++i)
	{
		for (j = 0; j < p; ++j)
		{	
			if(a[i]==b[j])
				{a[i]=-1;
				b[j]=-1;}
		}

	}
	
	for (int i = 0; i < p; ++i)
	{	
		if(a[i]!=-1)
			{printf("ne mozE\n");
			return 0;}
	}
	printf("moze\n");



	return 0;
}