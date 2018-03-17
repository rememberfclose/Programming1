#include <stdio.h>

int main ()
{
	int broj, j, d, s;
	
	scanf("%d", &broj);
	j=broj%10;
	d=(broj/10)%10;
	s=(broj/100)%10;
	
	if (broj==j*j*j+d*d*d+s*s*s)
		{
		printf("broj je armstrongov.\n");
		}
	else {
	printf("broj nije armstrongov\n");
	}


return 0;
}

