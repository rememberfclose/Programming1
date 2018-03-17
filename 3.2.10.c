#include <stdio.h>
#include <stdlib.h>
void minmax(float a[], int n, float* min, float* max)
{	int i;
	int m=a[0];
	int x=a[0];
	for(i=0; i<n; i++)
	{
		if(m>a[i])
			m=a[i];
		else if (a[i]>x)
			x=a[i];
	}
	*min=m;
	*max=x;
}

int main()
{
	int n;
	float a[100], mx, mn;
	
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%f", &a[i]);
	}
	minmax(a, n, &mn, &mx);

	printf("%f %f\n", mn, mx);

	return 0;
}