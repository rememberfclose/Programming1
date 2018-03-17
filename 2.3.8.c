#include <stdio.h>
#include <stdlib.h>

int fak(int a)
{	
	int rez=1;
	if (a==0)
	{
		return 1;
	}
	while(a)
	{
		rez*=a;
		a--;
	}



}



int main()
{
	int p, q;
	scanf("%d %d", &p, &q);
	if (p<0 || q<0 || p>12 || q>12)
	{
		printf("greska\n");
		return 16;
	}
	
	printf("%d\n", fak(p)+fak(q));


	return 0;
}