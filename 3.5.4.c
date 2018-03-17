#include <stdio.h>
#include <string.h>
struct Grad
{
	char ime[21];
	double stepeni;
};

struct Grad ucitaj()
{	struct Grad c;
	char name[21];
	double deg;
	scanf("%s %lf", name, &deg);
	strcpy(c.ime, name);
	c.stepeni=deg;
	return c;
}

int main()
{
	int n;
	scanf("%d", &n);
	struct Grad gradic[50];
	for (int i = 0; i < n; ++i)
	{
		gradic[i]=ucitaj();
	}
	printf("savrseni za klizanje:\n");
	for (int i = 0; i < n; ++i)
	{
		if (gradic[i].stepeni>=3 && gradic[i].stepeni<=8)
		{
			printf("%s\n", gradic[i].ime);
		}
	}

	return 0;
}