#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
int i, n=0, temp;
time_t t;

srand((unsigned) time(&t));

for(i=0;i<10000;i++)
{	temp=(rand()%6)+1;
	

if((temp)==6)
	n++;



}
printf("sansa je %.2f posto\n", (n/(double)i)*100);
















	return 0;
}