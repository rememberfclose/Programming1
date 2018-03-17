#include <stdio.h>
#include <stdlib.h>
int main()
{

	int p, fak=1;

	scanf("%d", &p);

	while (p>0)
	{
		fak*=p;


		p--;
	}
	printf("%d\n", fak);


	return 0;
}