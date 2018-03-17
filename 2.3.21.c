#include <stdio.h>
#include <stdlib.h>
int zbir_delioca(int n)
{	int zbir=0, j, i;
for(i=1;i<=n/2;i++)
{	zbir=0;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		zbir+=j;
	}
	printf("%d ", zbir);

}
return 0;


}



int main()
{

	int k;
	scanf("%d", &k);
	zbir_delioca(k);


	return 0;
}