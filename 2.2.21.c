#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, cena, najmanja;

	scanf("%d", &n);
	cena=najmanja;
	while (n>1)

	{
		scanf("%d", &cena);

		if (cena<najmanja)
		
			najmanja=cena;
		


		n--;
	}
	printf("%d\n", najmanja );


	return 0;
}