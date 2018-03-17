#include <stdio.h>
#include <stdlib.h>
int main()
{

	int broj, a, b, c, d;
	scanf("%d", &broj);

	a=broj%10;
	b=(broj/10)%10;
	c=(broj/100)%10;
	d=(broj/1000)%10;

	int max=a, min=a;

	int stepenmax=1, stepenmin=1;

	if (b>max)
	{
		max=b;
		stepenmax=10;
	}
	if (c>max)
	{
		max=c;
		stepenmax=100;
	}
	if (d>max)
	{
		max=d;
		stepenmax=1000;
	}
		if (b<min)
	{
		min=b;
		stepenmin=10;
	}
	if (c<min)
	{
		min=c;
		stepenmin=100;
	}
	if (d<min)
	{
		min=d;
		stepenmin=1000;
	}

	int rez;

	rez=broj-min*stepenmin+max*stepenmin - max*stepenmax + min*stepenmax;

	printf("rezultat: %d \n", rez);



	return 0;
}