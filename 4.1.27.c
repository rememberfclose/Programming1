#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{	FILE *ulaz1, *ulaz2;
	char s[200], a[200];
	ulaz1=fopen(argv[1], "r");
	ulaz2=fopen(argv[2], "r");
	int brojac=1;
	while((fgets(s, 100, ulaz1))!=NULL && (fgets(a, 100, ulaz2))!=NULL)
	{
		if(strcmp(a,s)!=0)
		printf("%d ",brojac);
		brojac++;
	}

	return 0;
}