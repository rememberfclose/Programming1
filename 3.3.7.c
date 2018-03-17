#include <stdio.h>
#include <stdlib.h>
int podniska(char veca[], char manja[])
{	int i, j=0;
	for (int i = 0; veca[i] != '\0'; ++i)
	{
		if(manja[0]==veca[i])
			{
				while(manja[++j]!='\0')
				{
					if(manja[j]!=veca[++i])
						return 0;
				}
				return 1;
			}
	}

	return 0;

}



int main()
{	char t[100], s[100];


	scanf("%s", t);
	scanf("%s", s);
	if(podniska(t,s))
	printf("jeste podniska\n");
	else printf("nije podniska\n");


	return 0;
}