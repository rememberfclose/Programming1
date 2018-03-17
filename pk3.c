#include <stdio.h>



int main()
{
	int k, cif, m=0;

	scanf("%d", &k);

	while(k)
		{
			cif=k%10;
			k/=10;
			if (cif>m && cif%2==0)
			{
				m=cif;
			}
		}

	if (m)
	{
		printf("najveca je %d\n", m);
	}
	else printf("ne sadrzi neparne\n");



	return 0;
}