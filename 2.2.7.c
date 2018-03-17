#include <stdio.h>

int main ()
{
	float broj, novi, stepen;
	scanf("%f", &broj);
	scanf("%f", &stepen);
	novi=broj;
	
	
	if (stepen>0) {
	
	while (stepen>1)
	{
	
	novi=broj*novi;
	
	
	stepen--;
	
	}
	
	
	printf("%f\n", novi);
	}
	
	else if (stepen<0) {
	
	stepen=-stepen;
	
	while (stepen>1)
	{
	
	novi=broj*novi;
	
	
	stepen--;
	
	}
	
	
	printf("%f\n", 1/novi);
	}
	
	
	
	
return 0;
}

