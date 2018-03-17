#include <stdio.h>
#include <stdlib.h>
int main()
{

	int a[100], b[100], i, n, p, j, w;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	p=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]%2==0)
		{
			b[p]=a[i];
			p++;
		}
	}

	for (int i = 0; i < p; ++i)
	{
		printf("%d ", b[i]);
	}
















	for (int i = 0, j=0; i < n; ++i)
	{
		if(a[i]%2==0)
		{
			a[j]=a[i];
			j++;
		}
	w=j;
	}
	printf("\n");
	for (int i = 0; i < w; ++i)
	{
		printf("%d ", a[i]);
	}
	return 0;
}