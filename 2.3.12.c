#include <stdio.h>
#include <stdlib.h>

float arit(int n)
{	if (n<0)
{
	n=-n;
}
	float zbir=0, i=0, a;
	while(n)
	{	
		a=n%10;
		zbir+=a;
		i++;
		n/=10;
	}
	return zbir/i;
}

int main()
{	int k;
	scanf("%d", &k);
	
	printf("%.2f", arit(k));


	return 0;
}