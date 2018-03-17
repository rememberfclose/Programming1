#include <stdio.h>

int main ()
{
	int broj, j, d, s, h, zbir=1;
	
	scanf("%d", &broj);
	j=broj%10;
	d=(broj/10)%10;
	s=(broj/100)%10;
	h=broj/1000;
	
	if (j%2==0)
		{
		zbir*=j;
		}
	if (d%2==0)
		{
		zbir*=d;
		}
		if (s%2==0)
		{
		zbir*=s;
		}
		if (h%2==0)
		{
		zbir*=h;
		}
	printf("proizvod parnih je %d\n", zbir);


return 0;
}

