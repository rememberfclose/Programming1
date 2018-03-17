#include <stdio.h>
#include <stdlib.h>
struct prod{double cena; char ime[20];};


int main()
{
	int n; int k;
	struct prod prodze[50];
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%s %lf", prodze[i].ime, &prodze[i].cena);
	}
	scanf("%d", &k);
	for (int i = 0; i < n; ++i)
	{
		if(k>=prodze[i].cena)
			printf("%s\n", prodze[i].ime);
	}


	return 0;
}