#include <stdio.h>
#include <stdlib.h>
int prost(int x)
{	int n;
	n=x/2;
	while(n!=1)
	{
		if (x%n==0)
		{
			return 0;
		}
		


		n--;
	}
return 1;



}



int main()
{

	int p;
	scanf("%d", &p);
	if (prost(p))
	{
			printf("prost\n");
	}
	else
	{
			printf("nije prost\n");
	}


	return 0;
}