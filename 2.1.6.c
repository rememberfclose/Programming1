#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, min, ukp, usteda;

	printf("Uneti cene\n");
	scanf("%d %d %d", &a, &b, &c);
	min=a;
	if (b<min)
	{
		min=b;
	}
	if (c<min)
	{
		min=c;
	}
	ukp=a+b+c-min+1;
	printf("Ukupno %d\n Usteda %d\n", ukp, min-1);


	return 0;
}