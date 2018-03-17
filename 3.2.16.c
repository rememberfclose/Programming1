#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[])
{
int i;
int j;
for(i=0; i<argc; i++)
{

	for(j=0; j<argc; j++)
	{
		if(j==i)
		continue;
	if(strcmp(argv[i], argv[j])==0)
		{printf("ima istih\n");
			return 0;
		}	

	}


}



printf("nema istih\n");

















return 0;
}
