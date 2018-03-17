#include <stdio.h>
#include <stdlib.h>
int main()
{

	int x, p, poz=0;
	p=1;

	printf("unesi brojeve\n");
	while (1)
	{
		scanf("%d", &x);
		if (x==0)
		break;
	

	if (x<0)
	
	continue;

	
	p=p*x;


	}

	    printf("Proizvod pozitivnih unetih brojevi je %d.\n",p);



	return 0;
}