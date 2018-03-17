#include <stdio.h>
#include <stdlib.h>

int kkk(int *a, int *b)
{	
	int temp;
	if(*a>*b)
	{
		temp=*b;
		*b=*a;
		*a=temp;
	}
	return 0;
}

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);
	kkk(&x, &y);
	
	printf("%d %d\n", x, y );


	return 0;
}