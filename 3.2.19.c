#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sifruj(char s[], int k, char c)
{	int i;
	
	k=k%26;	
	

	for(i=0;s[i]!='\0';i++)
	{
	if(islower(s[i]))
		{
		if(c=='D')
			{
			s[i]=s[i]+k;
			if(!islower(s[i]))
				{
				s[i]=s[i]-26;
				}
			}
		if(c=='L')
			{
			s[i]=s[i]-k;
			if(!islower(s[i]))
				{
				s[i]=s[i]+26;
				}
			}
		}
	if(isupper(s[i]))
		{
		if(c=='D')
			{
			s[i]=s[i]+k;
			if(!isupper(s[i]))
				{
				s[i]=s[i]-26;
				}
			}
		if(c=='L')
			{
			s[i]=s[i]-k;
			if(!isupper(s[i]))
				{
				s[i]=s[i]+26;
				}
			}
		}
	
	}
}
int main(int argc, char*argv[])
{
	char pom;
	pom='D';
	
	if(argc==5)
	sifruj(argv[1], atoi(argv[2]), argv[4][0]);
	if(argc==3)
	sifruj(argv[1], atoi(argv[2]), pom);

	
	printf("%s\n", argv[1]);


	return 0;
}
