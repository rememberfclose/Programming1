#include <stdio.h>
#include <string.h>
struct Osoba
{
	char ime[20];
	char prezime[30];
	char mejl[50];
};
struct Osoba ucitaj()
{	struct Osoba c;
	scanf("%s %s %s", c.ime, c.prezime, c.mejl);
	return c;
}

int main()
{	int n, i;
	struct Osoba ljudi[50];
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		ljudi[i]=ucitaj();
	}
	printf("vlasnici gmail naloga su\n");
	for (int i = 0; i < n; ++i)
	{	
		if (strstr(ljudi[i].mejl, "@gmail.com")!=NULL)
		{
			printf("%s %s\n", ljudi[i].ime, ljudi[i].prezime );
		}
	}

	
	return 0;
}