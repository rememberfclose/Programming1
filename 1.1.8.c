#include <stdio.h>
#include <stdlib.h>
int main()
{

	unsigned a,b,p;
	printf("Input two numbers\n");
	scanf("%d %d", &a, &b);



	
	printf("Your input %d %d\n", a, b );
	p=a;
	a=b;
	b=p;
	printf("Your output %d %d\n", a, b );

	return 0;
}