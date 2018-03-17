#include <stdio.h>
#include <stdlib.h>

int kvad(int x)
{
	return x*x;
}
int fak(int x)
{	int f;
	f=1;
	while(x>1)
	{
		f*=x;
		x--;
	}
	return f;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d\n", fak(a));


	return 0;
}