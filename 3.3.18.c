#include <stdio.h>
#include <ctype.h>
#include <math.h>
int dek(char s[])
{
	int i=0;
	int k=0, n, m=0;

	for(i=2; s[i]!='\0'; i++)
	{}
	i--;
	for(;s[i]!='x' && s[i]!='X';i--)
	{
		if(s[i]=='a' || s[i]=='A')
			n=10;
		if(s[i]=='b' || s[i]=='B')
			n=11;
		if(s[i]=='c' || s[i]=='C')
			n=12;
		if(s[i]=='d' || s[i]=='D')
			n=13;
		if(s[i]=='e' || s[i]=='E')
			n=14;
		if(s[i]=='f' || s[i]=='F')
			n=15;
		if(isdigit(s[i]))
			n=s[i]-'0';
	k+=n*pow(16, m);
	printf("%d\n", k);
	m++;

	}





return k;



}
int main()
{
	char s[7];
	scanf("%s", s);
	printf("%d\n", dek(s));


	return 0;
}