#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, min;
	
	printf("Unesite dva broja\n");
	scanf("%d %d", &a, &b);

	if (a<b)
	{
		min=a;
	}
	else
		{ min=b;}

	printf("Minimum je: %d\n", min );

	return 0;
}