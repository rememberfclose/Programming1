#include <stdio.h>
#include <ctype.h>

unsigned apsolutna(int x)
{
	if(x==0)
		return 0;
	if(x>0)
		return x;
	if(x<0)
		return -x;

}


int main()
{
	int a;

	scanf("%d", &a);

	printf("%u\n", apsolutna(a));
	


	return 0;
}