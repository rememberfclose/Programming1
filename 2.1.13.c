#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int god;

	printf("Unesi godinu\n");
	scanf("%d", &god);
	if (god % 400 ==0)
	{
		printf("Jeste prestupna!\n");
	}
	else if (god % 100 == 0)
	{
		printf("Nije prestupna :(\n");
	}
	else if (god % 4 == 0)
	{
		printf("Jeste prestupna :)\n");
	}
	else 
	{
		printf("Nije prestupna\n");
	}

	return 0;
}