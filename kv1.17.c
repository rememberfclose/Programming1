#include <stdio.h>
#include <stdlib.h>
unsigned zbir(unsigned a){
	int zbir=0;
	while(a)
	{
		zbir+=a%10;
		a/=10;
	}
return zbir;
}
int main()
{	
	
	int suma=0, temp;
	






	while((scanf("%d ", &temp))!=EOF)
	{	if(temp<100 || temp>999)
		printf("GRESKA\n");
		if (temp%zbir(temp)==0)
		{
			suma+=temp;
		}






	}
	
	printf("\n%d\n", suma);


	return 0;
}