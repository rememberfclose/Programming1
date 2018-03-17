#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, kolona, vrsta;

	scanf("%d", &n);

	for (kolona=1; kolona <= n; ++kolona)
	{
		for (vrsta=1; vrsta <= n; ++vrsta)
			{printf("* ");}
		putchar('\n');
	}

	return 0;
}