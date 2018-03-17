#include <stdio.h>

#include <string.h>

int main(int argc, char *argv[])
{
	FILE *ulaz;
	char niska[81], najveca[81];
	ulaz=fopen("ulazni.txt","r");
	int max=0, temp;
	while(fgets(niska, 81, ulaz))
	{
		temp=strlen(niska);
		if(temp>max)
			{
					max=temp;
					strcpy(najveca,niska);
			}
	else if(temp==max && strcmp(najveca, niska)>0)
			{
					max=temp;
					strcpy(najveca,niska);
			}
	}
	printf("%s %d\n", najveca, max);
return 0;
}
