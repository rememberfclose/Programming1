#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c;
	int n, broj[10], vel[26], mal[26], i, j;

	for(i=0;i<=9;i++)
	{
		broj[i]=0;
	}
	for(i=0;i<26;i++)
	{	mal[i]=0;
		vel[i]=0;
	}
	scanf("%d", &n);
	while (n+1)
	{
		scanf("%c", &c);
		if(c>='0' && c<='9')
			broj[c-'0']++;
		if(c>='a' && c<='z')
			mal[c-'a']++;
		if(c>='A' && c<='Z')
			vel[c-'A']++;
		n--;
	}

	for(i=0;i<26;i++)
	{ if(vel[i])
	printf("%c %d\n", i+65, vel[i]);
	}
	for(i=0;i<26;i++)
	{
		if(mal[i])
	printf("%c %d\n", i+97, mal[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(broj[i])
	printf("%c %d\n", i+48, broj[i]);
	}


	return 0;
}