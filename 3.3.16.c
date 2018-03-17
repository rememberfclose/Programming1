#include <stdio.h>
#include <string.h>



int main()
{
	int i=0, n, p, k=0, duz;
	char s[100], pom;

	scanf("%d", &n);

	while(n!=0)
	{	if(n<0)
		{n=-n;
		k++;}
		s[i]=n%10+48;
		n/=10;
		i++;
	}
	if(k)
	{s[i]='-';
	s[i+1]='\0';}
	else
		s[i]='\0';

	i=0;
	duz=strlen(s);

	do
	{	
		pom=s[i];
		s[i]=s[duz-1-i];
		s[duz-1-i]=pom;
		i++;
	}while(i<duz/2);

	printf("%s\n", s);
	return 0;
}