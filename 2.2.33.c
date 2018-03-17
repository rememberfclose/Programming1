#include <stdio.h>
#include <stdlib.h>
int main()
{

	int f, d=1189, s=841, temp;
	scanf("%d", &f);
	while(f>0)
	{	
		temp=s;
		s=d/2;
		d=temp;



		f--;
	}
	printf("%d %d\n",s, d);


	return 0;
}