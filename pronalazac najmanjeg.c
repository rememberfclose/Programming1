#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, najmanji, k;

	scanf ("%d", &n);

	najmanji=k;
	while(n>0)
	{
		scanf("%d", &k);
		if (k<najmanji)
		{najmanji=k;}
		n--;
	}
	printf("%d\n", najmanji );
	return 0;
}