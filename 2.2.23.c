#include <stdio.h>
#include <stdlib.h>

int num(int x)
{
	int i=0;
while(x!=0)
{
x/=10;
i++;

}
return i;
}



int main()
{
	int n, broj, max=0, max_broj;

	scanf("%d", &n);
	while(n)
	{
		scanf("%d", &broj);
		if (num(broj)>max)
		{
			max=num(broj);
			max_broj=broj;
		}



		n--;
	}
	printf("%d\n", max_broj);


	return 0;
}