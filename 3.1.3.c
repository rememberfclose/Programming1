#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, i, save;

	char br_poj[10];

		scanf("%d", &n);
		n=abs(n);
	for(i=0;i<10;i++)
	{
		br_poj[i]=0;
	
	}

	save=n;

	
	while(n)
	{

	br_poj[n%10]++;
	n/=10;

	}
	for(i=0;i<10;i++)
		{if(br_poj[i])printf("U broju %d cifra %d se pojavljuje: %d puta\n", save, i,  br_poj[i]);
}
	return 0;
}