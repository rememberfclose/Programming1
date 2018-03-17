#include <stdio.h>
#include <stdlib.h>
int main()
{

	int x,dani,sati,min,sek;
	printf("Unesi broj godina:");
	scanf("%d",&x);
	dani= x*365;
	printf("Imas %d dana, ili\n",dani);
	sati= x*365*24;
	printf("%d sati, ili\n",sati);
	min= x*365*24*60;
	printf("%d minuti, ili\n",min);
	sek= x*365*24*60*60;
	printf("%d sekundi.\n",sek);


	return 0;
}