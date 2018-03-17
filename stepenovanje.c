#include <stdio.h>
#include <stdlib.h>
int main()
{

	
	float n, broj=1;
	int stepen;

	scanf("%f %d", &n, &stepen);

	if (stepen==0)
	{
		printf("1\n");
	}
	else if (stepen>0)
	{
		while(stepen>0)
		{
			broj*=n;

			stepen--;
		}
		printf("%f\n", broj);}
	else if (stepen<0)
	{
		stepen=-stepen;
		while(stepen>0)
		{
			broj*=n;

			stepen--;
		}
		printf("%f\n", 1/broj);

	}


	return 0;
}