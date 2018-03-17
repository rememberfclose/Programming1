#include <stdio.h>
#include <stdlib.h>
int pojav(int a[], int n, int x)
{
	int i, p=0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i]==x)
		{
			p++;
		}
	}

	return p;
}



int main()
{
	int n, a[100], b[100], i, p;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	p=0;
	for (int i = 0; i < n; ++i)
	{
		if (pojav(a, n, a[i])==3 && pojav(b, n, a[i])==0)
		{
		b[p]=a[i];
		p++;
		}
	}
	for (int i = 0; i < p; ++i)
	{
		printf("%d ", b[i]);
	}


	
	return 0;
}