#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n;
	scanf("%d", &n);
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%10==0 || (a[i]%(a[i]%10)==0))
		printf("%d ", a[i]);
	}






	return 0;
}