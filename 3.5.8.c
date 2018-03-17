#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct student{
	char ime[30];
	char prezime[30];
	char smer;
	double prosek;
};






int main()
{

	struct student studenti[2000];
	char smer=32;
	double max_prosek;
	int n, i, temp;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%s %s %c %lf", studenti[i].ime, studenti[i].prezime, &studenti[i].smer, &studenti[i].prosek);
	}
	while(isspace(smer)){
	if(!isspace(smer=getchar()))
	{
	for (int i = 0; i < n; ++i)
	{
	
	if(studenti[i].smer==smer)
		printf("%s %s\n", studenti[i].ime, studenti[i].prezime);
	}	
	}
	}
	max_prosek=studenti[0].prosek;
	for (int i = 0; i < n; ++i)
	{
		if (max_prosek<studenti[i].prosek)
		{	max_prosek=studenti[i].prosek;}
	}
	for (int i = 0; i < n; ++i)
	{
		if (max_prosek==studenti[i].prosek)
		{printf("%s %s %c %lf\n", studenti[i].ime, studenti[i].prezime, studenti[i].smer, studenti[i].prosek);}
	}

	
	

	return 0;
}