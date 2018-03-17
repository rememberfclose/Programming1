#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a[100];
	int n, i;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%f", &a[i]);
		if (a[i]<0)
		{
			a[i]*=a[i];
		}
	}
		for (int i = 0; i < n; ++i)
	{
		printf("%.2f ", a[i]);

	}

	return 0;
}