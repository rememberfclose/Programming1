#include <stdio.h>
#include <stdlib.h>
int main()
{

	int broj;
	scanf("%d",&broj);
	unsigned int jed,des,sto;
	
	jed=broj%10;
	des=(broj/10)%10;
	sto=(broj/100)%10;

	
	printf("%d%d%d\n",jed,des,sto);


	return 0;
}