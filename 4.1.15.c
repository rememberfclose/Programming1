#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char* argv[])
{



	FILE* izlaz;
	izlaz=fopen("izlaz.txt", "w");
	char temp[100];
	if(argc==1)
	{	
		while((fgets(temp, 80, stdin))!=NULL)
			fprintf(izlaz, "%s", temp);
	}
	else if((strcmp(argv[1], "-m")==0) || (strcmp(argv[1], "-M")==0))
	{
		while((fgets(temp, 80, stdin))!=NULL)
			{	
				if (islower(temp[0]))
				{
					fprintf(izlaz, "%s", temp);
				}
				
			}
	}
		else if((strcmp(argv[1], "-v")==0) || (strcmp(argv[1], "-V")==0))
	{
		while((fgets(temp, 80, stdin))!=NULL)
			{	
				if (isupper(temp[0]))
				{
					fprintf(izlaz, "%s", temp);
				}
				
			}
	}


	return 0;
}