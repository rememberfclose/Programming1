#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

	char s[100];
	int pom, x=0, n, stepen=1;
	scanf("%s", s);
	n=strlen(s)-1;
	while(n>=0)
	{	if(s[n]=='-')
		{x=-x;
			break;}
	if (s[n]=='+')
		break;
		pom=s[n]-'0';
		x+=pom*stepen;
		stepen*=10;
		n--;
	}
	printf("%d\n", x);


	return 0;
}