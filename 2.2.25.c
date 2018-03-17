#include <stdio.h>
#include <string.h>

int main(){
	
	int max, min, n;
	scanf("%d", &n);
	max=n;
	min=n;
	
	while(n!=0)
	{
	scanf("%d", &n);
	if (n>max) {max=n;}
	if (n<min && n!=0) {min=n;}
	
	
	
	
	}
	
	printf("%d\n", (max-min));
	
	
	
	return 0;
	
}
