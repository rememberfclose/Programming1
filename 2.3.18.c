#include <stdio.h>
#include <stdlib.h>
int par_nepar(int n)
{	int cif1, cif2;
	while(n>9)
	{
		cif1=n%10;
		cif2=(n/10)%10;
		n=n/10;
		if((cif2%2!=0 && cif1%2!=0) || (cif1%2==0 && cif2%2==0))
		return 0;
	}
	return 1;

}



int main()
{
	int k;
	k=abs(k);
	scanf("%d", &k);

	if(par_nepar(k))
		printf("ispunjava\n");
	else printf("neispunjava\n");

	return 0;
}