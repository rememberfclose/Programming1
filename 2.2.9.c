#include <stdio.h>

int main ()
{
	int broj;
	
	scanf("%d", &broj);
	
	while (broj%10==0)
	{broj=broj/10;}
	
	printf("%d\n", broj);
	
	
return 0;
}

