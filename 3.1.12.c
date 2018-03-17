#include <stdio.h>
#include <stdlib.h>

void ucitaj(int a[100], int n)
{
	int i;

	for(i=0;i<n;i++)
	{scanf("%d", &a[i]);}
}
int suma(int a[100], int n)
{
	int i, suma=0;
	for(i=0;i<n;i++)
	suma+=a[i];

	return suma;
}
void stampaj(int a[100], int n)
{	int i;
	for(i=0;i<n;i++)
	{printf("%d ", a[i]);}
}
float ari(int a[100], int n)
{
	return (float)suma(a, n)/n;
}
int min(int a[100], int n)
{
	int min=a[0];
	for (int i = 0; i < n; ++i)
	{
		if (min>a[i])
			min=(a[i]);
	}
	return min;
}
int max(int a[100], int n)
{
	int max;
	max=a[0];
	for (int i = 0; i < n; ++i)
	{
		if (max<a[i])
			max=(a[i]);
	}
	return max;
}


void main()
{	int x[100];
	int m;
	scanf("%d", &m);
	ucitaj(x, m);
	stampaj(x,m);
	printf("%d ", suma(x,m));
	printf("%.2f \n", ari(x,m));
	printf("%d\n", min(x, m));
	printf("%d\n", max(x, m));
}