#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=1, prod=1;

	while (n!=0)
	{scanf("%d", &n);
	if (n>0)
	{
		prod=prod*n;
	}

}
	printf("%d\n", prod);
	return 0;
}