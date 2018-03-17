#include <stdio.h>
#include <math.h>
int main()
{

	float x, abs;



	printf("Unesite broj\n");
		scanf("%f", &x);

	if (x<0)
	{
		abs=-x;
	}
	else if (x>0)
	{
		abs=x;
	}
	else if (x=0)
	{
		abs=0;
	}


	printf("Apsolutna vrednost %.2f\n", abs);
	return 0;
}