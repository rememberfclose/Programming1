#include <stdio.h>

int main ()
{
	int broj, j, d, s, h;
	
	scanf("%d", &broj);
	j=broj%10;
	d=(broj/10)%10;
	s=(broj/100)%10;
	h=(broj/1000);
	
	if (j > d && j > s && j > h)
	{
		printf("%d je najveci\n", j);
	}
	else if (d > j && d > s && d > h)
	{
		printf("%d je najveci\n", d);
	}
	else if (h > j && h > s && h > d)
	{
		printf("%d je najveci\n", h);
	}
	else {
	printf("%d je najveci\n", s);
	}



return 0;
}

