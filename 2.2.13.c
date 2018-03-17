#include <stdio.h>

int main ()
{
	int n, zbir, unos;
	
	scanf("%d", &n);
	zbir=0;
	while (n>0)
	{
	scanf("%d", &unos);
	if(unos%2!=0 && unos<0)
	{zbir+=unos;}
	
	n--;
	}
	printf("%d", zbir);
	
	
return 0;
}

