#include <stdio.h>
#include <stdlib.h>

struct student {
	char ime[20];
	char prezime[30];
	float prosek;
	int dina;
	char cycle;

};





int main(int argc, char *argv[])
{	
	if (argc!=2)
	{
		printf("los poziv\n");return 0;
	}
	FILE *ulaz;
	int k=0;
	ulaz=fopen("nagrada.txt", "r");
	struct student lista[100];
	unsigned int n=atoi(argv[1]);
	for (int i = 0; i < n; ++i)
	{
		fscanf(ulaz, "%s %s %c %d %f", lista[i].ime, lista[i].prezime, &lista[i].cycle, &lista[i].dina, &lista[i].prosek);	
	}
	for (int i = 0; i < n; ++i)
	{
		if((lista[i].cycle=='M' || (lista[i].cycle=='O' && lista[i].dina==4)) && (lista[i].prosek>=9.5))
		{printf("%s %s \n", lista[i].ime, lista[i].prezime);
		k++;
		}
	}
	if (k==0)
	{
		printf("nema pobednika\n");
		return 0;
	}


	return 0;
}