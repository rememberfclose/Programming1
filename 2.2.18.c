#include <stdio.h>
#include <string.h>

int main(){

	float n, zbir=0, i=-1;
	
	while(n!=0)
	{
	scanf("%f", &n);
	zbir+=n;
	i++;
	
	}
	printf("%.4f", (zbir/i));
	return 0;
	
}
