#include <stdio.h>
#include <stdlib.h>
int main()
{
	int b1=1, b2=1, b3, p, n;

	scanf("%d", &n);

	if (n==1)
	{
		printf("1\n");
	}
	else if (n==2)
	{
		printf("1\n");
	}
	else {
	
	while(n>2)
	{
		b3=b1 + b2;

		p=b2;
		b2=b3;
		b1=p;
		


		n--;

	}
		printf("%d\n", b3);
}

	return 0;
}