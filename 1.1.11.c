#include <stdio.h>
#include <math.h>
int main()
{
	unsigned a, b100, b50, b20, b1;
	
	printf("Test\n");

	scanf("%u", &a);

	
	b100=a/100;
	a=a%100;
	b50=a/50;
	a=a%50;
	b20=a/20;
	a=a%20;
	b1=a/1;
	a=a%1;

	printf("stotki %u, pedes %u, dvaes %u, jen %u.\n",b100, b50, b20, b1 );


	return 0;
}