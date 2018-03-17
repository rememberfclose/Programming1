#include <stdio.h>
#include <stdlib.h>
int prost(int x)
{	int n;
	if(x<0)
		x=-x;
	n=x/2;
	while(n!=1)
	{
		if (x%n==0)
		{
			return 0;
		}
		


		n--;
	}
return 1;

}


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
		if (!prost(a[i]))
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
		if(!prost(a[i]))
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