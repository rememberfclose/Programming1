#include <stdio.h>
#include <stdlib.h>

float stepen(float x, int n)
{	float stp=1;
	if(n<0)
		{
			n=abs(n);
			while(n>0)
			{
			stp*=x;
			n--;
			}
			return 1/stp;
		}
	else 
	{
		while(n>0)
		{
		stp*=x;
		n--;
		}
		return stp;
	}
	
}


int main()
{
	float a;
	int b;
	scanf("%f %d", &a, &b);
	printf("%f\n", stepen(a, b));


	return 0;
}