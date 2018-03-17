#include <stdio.h>
#include <stdlib.h>
int main()
{
	int k, n, broj;

	scanf("%d", &k);

	if (k<10)
	{
		printf("%d\n", k);
	}
	else
		if (k>=10 && k<189)
		{
			if (k%2!=0)
			{
				n=(k-9)/2;
				broj= (n+9)%10;
				printf("%d\n", broj);
			}
				else 
				{
					n=(k-9)/2 + 1;
                    broj=n+9;
                    printf("%d\n",broj/10);
				}
			
		}


	return 0;
}