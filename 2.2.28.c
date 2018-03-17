#include <stdio.h>
#include <math.h>
int main()
{

	int x, j=0, cifra, broj=0, i=0;

	scanf("%d", &x);

	while(x){
	i++;
	cifra=x%10;
	x=x/10;
	if (i%2==0)
	{
		continue;
	}
	broj=broj+(cifra*pow(10, j));
	j++;
	}

	printf("%d\n", broj);
	return 0;
}