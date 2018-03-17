#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vocka{

	char ime[20];
	float vitamin;

};

int main()
{
	char rec[20];
	struct Vocka fruit[50];
	int i=0, j;
	struct Vocka max_vocka;

	while(1)
	{
		scanf("%s", rec);
		if(strcmp(rec, "KRAJ")==0)
			break;
	strcpy(fruit[i].ime, rec);
	scanf("%f", &fruit[i].vitamin);
	i++;
	}
	max_vocka=fruit[0];

	for (int j = 1; j < i; ++j)
	{
		if (fruit[j].vitamin>max_vocka.vitamin)
		max_vocka=fruit[j];

	}

	printf("%s %.3f\n", max_vocka.ime, max_vocka.vitamin);
	return 0;
}