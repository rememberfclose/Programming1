#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
		
	int n, d, p1, p2=p1+1, z=0;
	scanf("%d", &n);
	scanf("%d", &d);


	while (n>0)
	{
		scanf("%d", &p1);
		if (abs(p2-p1)==d)
		{
			z++;
		}
	
		p2=p1;



		n--;
	}
	printf("%d\n", z);

	return 0;
	
}
