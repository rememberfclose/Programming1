#include <stdio.h>
#include <stdlib.h>
int suma_del(int n)
{int suma=0;
	if (n<1)
	{
	return -1;
	}
	for (int i = 1; i < n; ++i)
	{	if(n%i==0)
		suma+=i;
		
	}
	return suma;
}

int main()
{
	int n;
	scanf("%d", &n);
	long int zbir=0;
	for (int i = 2; i < n; ++i)
	{	int temp=suma_del(i);
		for (int j = 2; j < n; ++j)
		{	int temp2=suma_del(j);
			if(temp==j && temp2==i && i!=j)
				zbir=zbir+i+j;

		}
	}

	printf("%li\n", zbir/2);
	
	


	return 0;
}