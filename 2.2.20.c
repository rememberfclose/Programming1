#include <stdio.h>
#include <string.h>

int main(){
	
	int n, flip=0;
	float f, priv1, priv2;

	scanf("%d", &n);
	priv1=priv2;
	while(n>0)
	{
	scanf("%f", &f);
	
	if (f > 0) {priv1 = 1;}
	else {priv1 = -1;}
	
	if (priv1!=priv2) {flip++;}
	
	
	
	priv2=priv1;
	
	
	
	
	n--;
	}
printf("%d", flip-1);

	return 0;
	
}
