#include <stdio.h>
#include <stdlib.h>
int zbir(int k)
{
int cif, zbir=0;

while(k!=0)
{
	cif=k%10;
	k=k/10;
	zbir+=cif;

}
return zbir;
}

int srecan(int x)
{	int d;
	while(x>=10)
	{
		d=zbir(x);
		x=d;

	}
	if (d==1)
	{
		return 1;
	}
	else return 0;

}



int main()
{
	int n, k;
	scanf("%d", &n);
	for(k=10; k<=n;k++)
	{
		if(srecan(k))
			printf("%d\n", k);
	}


	return 0;
}