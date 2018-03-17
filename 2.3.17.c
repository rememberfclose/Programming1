#include <stdio.h>
#include <stdlib.h>

int rast(int n)
{
	int cif1, cif2;

	while(n)
	{
	cif1=n%10;
	cif2=(n/10)%10;
	if (cif1<cif2)
	{
		return 0;
	}
	n/=10;

	}
return 1;



}


int main()
{

	int k;
	scanf("%d", &k);
	if(rast(k))
	printf("raste\n");
	else printf("opada\n");


	return 0;
}