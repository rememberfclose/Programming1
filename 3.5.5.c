#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Par{

	char srb[20];
	char eng[20];
};


int main()
{	int i=0, j=0, n;
	struct Par trans [100];
	char rec[20][20];
	char prevod[20][20];
	char string[100];
	
	

	while ((scanf("%s %s", trans[i].srb, trans[i].eng))==2)
	{
		i++;
	}
	n=i;
	printf("\n");
	
	for (int j = 0; (scanf("%s", rec[j]))==1; ++j)
	{
	

	for (int i = 0; i < n; ++i)
	{
		if (strcmp(rec[j], trans[i].srb)==0)
		{
			printf("%s ", trans[i].eng);
		}
		if (strcmp(rec[j], trans[i].srb)!=0 && i==n-1)
		printf("*** ");
	}
	
	}


	return 0;
}