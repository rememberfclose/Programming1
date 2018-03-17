#include <stdio.h>
#include <stdlib.h>
int main()
{

	
	int a, b;
	char c;

	while(1){
	scanf("%d%c%d", &a, &c, &b);
	if (c=='+')
	{
		printf("%d\n", a+b);
	}
	else if (c=='-')
	{
		printf("%d\n", a-b);
	}
	else if (c=='*')
	{
		printf("%d\n", a*b);
	}
	else if (c=='/')
	{
		printf("%d\n", a/b);
	}
	else if (c=='%')
	{
		printf("%d\n", a%b);
	}
	else{printf("greska\n");}
}

	return 0;
}