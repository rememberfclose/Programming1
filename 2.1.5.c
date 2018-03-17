#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, zbir=0;
	printf("Unesite tri broja\n");
	scanf ("%d %d %d", &a, &b, &c);
	if (a>0)
	{
		zbir+= a;
	}
	if (b>0)
	{
		zbir+= b;
	}
	if (c>0)
	{
		zbir+= c;
	}
	
	printf("Zbir pozitivnih je:%d\n", zbir);


	return 0;
}