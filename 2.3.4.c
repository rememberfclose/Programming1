#include <stdio.h>
#include <stdlib.h>
int min(int a, int b, int c)
{	
	
	if (a<=b && a<=c)
		return a;
	else if (b<=a && b<=c)
		return b;
	else if (c<=b && c<=a)
		return c;


}


int main()
{
	int x, z, y;
	scanf("%d %d %d", &x, &y, &z);
	
	printf("%d\n", min(x, y, z));


	return 0;
}