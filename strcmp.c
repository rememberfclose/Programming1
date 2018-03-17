#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int strkmp(char s1[], char s2[])
{
int i;
for(i=0;s2[i]==s1[i] && s2[i] && s1[i];i++)
	;
return s1[i]-s2[i];









}



int main()
{
	char niska1[MAX], niska2[MAX];
	scanf("%s", niska1);
	scanf("%s", niska2);
	if (strkmp(niska1, niska2)<0)
	{
		printf("druga je veca\n");
	}
	else if (strkmp(niska1, niska2)>0)
	{
		printf("prva je veca\n");
	}
	else if (strkmp(niska1, niska2)==0)
	{
		printf("iste su\n");
	}

	return 0;
}