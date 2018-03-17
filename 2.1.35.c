#include <stdio.h>
#include <math.h>
int main()
{
	int x1, x2, x3, x4, y1, y2, y3, y4, n1, k2, n2, k1;
	char k;

	scanf("%c", &k);
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	if(k=='k')
	{
		if(y1==y2 && x2==x3 && y3==y4 && x4==x1)
			{
				printf("%f.0\n", 4*sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
				return 0;
			}
		printf("ne moze\n");
	}
		
	if(k=='h')
	{
		if(x1==x2)
			{printf("y=%d\n", x1);
		return 0;}
	k1=(y2-y1)/(x2-x1);
	n1=y1-x1*k1;
	k2=(y4-y3)/(x4-x3);
	n2=y3-x3*k2;

	if(k1==k2 && n1==n2)
	{
		printf("y=%dx +%d\n", k1, n1);
	}
	else
	printf("ne moye\n");


	}
	int delta, deltap, deltaq;
	if(k=='j')
	{

		delta=x1*y2-x2*y1;
		deltap=x2*(y4-y3)-y2*(x4-x3);
		deltaq=x1*(y4-y3)-y1*(x4-x3);

		if (delta!=0)
		{
			printf("%d %d\n", deltap/delta, deltaq/delta);
		}
		else if(deltaq==0 && deltap==0)
			printf("neodredjen\n");
		else
			printf("nema resenja\n");






	}

	return 0;
}