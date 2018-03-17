#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i;
	int a[100], b[100], c[200];

	scanf("%d", &n);

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)
		scanf("%d", &b[i]);

	for(i=0;i<n;i++)
		c[i]=b[i];
	i=n;
	for(i;i<2*n;i++)
		c[i]=a[i-n];

	for(i=0;i<2*n;i++)
		printf("%d ", c[i]);


	return 0;
}