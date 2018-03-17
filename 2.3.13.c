 #include <stdio.h>
#include <stdlib.h>
int sadrzi(int x, int c)
{	int temp;
	if(x<0){x=-x;}
	while(x)
	{
		temp=x%10;
		if (temp==c)
		{
			return 1;
		}


		x/=10;
	}

return 0;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b>9)
	{
		printf("greska\n");
	}
	if (sadrzi(a, b))
	{
		printf("sadrzi\n");
	}
	else{printf("nesadrzi\n");}


	return 0;
}