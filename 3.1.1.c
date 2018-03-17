#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, p, k=0;

	scanf("%d", &n);
	int a[n], b[n];
	for (int i = 0; i < n; ++i)
	{	scanf("%d", &p);
		a[i]=p;
	}
	for (int i = 0; i < n; ++i)
	{	scanf("%d", &p);
		b[i]=p;
	}

	for (int i = 0; i < n; ++i)
	{
		k+=a[i]*b[i];
	}
	printf("%d\n", k);

	return 0;
}