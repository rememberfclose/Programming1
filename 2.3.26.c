#include <stdio.h>
#include <math.h>
int arm(int n)
{
	int i=0, p, zbir=0, cif, k;
	p=n;
	k=n;
	while(p)
	{
		p=p/10;
		i++;

	}
	while(n)
	{
		cif=n%10;
		n/=10;
		zbir+=pow(cif, i);
	}
	if(zbir==k)
	return 1;
	return 0;

}





int main()
{


	int x;
	scanf("%d", &x);
	if(arm(x))
		printf("jeste\n");
	else printf("nije\n");
	return 0;
}