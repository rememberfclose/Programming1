#include <stdio.h>
#include <string.h>

int main(){

	int n, suma=0, p;
	scanf("%d", &n);
	while(n>0)
	{
	scanf("%d", &p);
	if(p%5==0 && p%7!=0)
	{
	suma+=p;
	}
	
	
	n--;
	}
	
	printf("%d", suma);
	
	return 0;
	
}
