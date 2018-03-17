#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, kolona, vrsta;

	scanf("%d", &n);

	for(kolona=1; kolona<=n; kolona++)
	{
		for (vrsta=1; vrsta<=n; vrsta++)
		{
			printf("%3d", (kolona-1)*n+vrsta);
		}

		putchar('\n');
	}

	return 0;
}