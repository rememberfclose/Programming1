#include <stdio.h>
#include <math.h>
unsigned long fib(int x)
{
	int broj;

	broj=(pow(((sqrt(5)+1)/2),x)-pow((-(sqrt(5)-1)/2),x))/sqrt(5);
	return broj;



}




int main()
{

	int k;
	scanf("%d", &k);
	printf("%lu\n", fib(k+1));


	return 0;
}