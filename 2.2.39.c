#include <stdio.h>
int main()
{
	int n, suma=0, p, i=1;

	scanf("%d", &n);


	p=1;

	while (n>=p)

{
	
	suma+=p*p*p;

	p++;
	printf("i-%d s-%d\n",i, suma );
	i++;	
}
	return 0;
}