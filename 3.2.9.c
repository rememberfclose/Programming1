#include <stdio.h>
#include <stdlib.h>
void par_nepar(int a[], int n, int parni[], int* pn, int neparni[], int* nn)
{
	int i, j=0, q=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			{parni[j]=a[i];
				j++;
			}
		else 
			{
				neparni[q]=a[i];
				q++;
			}
	}
	*pn=j;
	*nn=q;
}
int main()
{
	int s[100], par, nepar, p[100], n[100], ne;

	scanf("%d", &ne);
	for (int i = 0; i < ne; ++i)
	{
		scanf("%d", &s[i]);
	}

	par_nepar(s, ne, p, &par, n, &nepar);

	for (int i = 0; i < par; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
	for (int i = 0; i < nepar; ++i)
	{
		printf("%d ", n[i]);
	}
	printf("\n");
	return 0;
}