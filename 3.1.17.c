#include <stdio.h>
#include <stdlib.h>
int main()
{

	int a[100];
	int n, i, min, max, pom, p1, p2;
	scanf("%d", &n);

	scanf("%d", &a[0]);
	min=a[0];
	max=a[0];
	for(i=1;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		if (a[i]>max)
		{	p1=i;
			max=a[i];
		}
		if (a[i]<min)
		{	p2=i;
			min=a[i];
		}


	}
	pom=a[p1];
	a[p1]=a[p2];
	a[p2]=pom;

	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}