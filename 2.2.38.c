#include <stdio.h>
int main()
{
	int n, suma=0;

	scanf("%d", &n);

	while(n>0)
	{
		suma+=n*n*n;
		
		n--;
		
	}
	printf("suma kubova je %d\n",suma);

	return 0;
}