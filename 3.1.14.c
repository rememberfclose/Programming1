#include <stdio.h>

void ucitaj(int a[100], int n)
{
	int i;
	for(i=0;i<n;i++)
	{scanf("%d", &a[i]);}
}
void stampaj(int a[100], int n)
{	int i;
	for(i=0;i<n;i++)
	{printf("%d ", a[i]);}
	printf("\n");
}
void dodaj(int a[100], int n, int p)
{	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+p;
	}
}

void obr(int a[100], int n)
{	int i, temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;

	}
}
void levo1(int a[100], int n)
{	int i, temp;
	temp=a[0];
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
void levo(int a[100], int n, int p)
{	int i; 
	int temp[100];
	for(i=0;i<n;i++)
	{
		temp[i]=a[i];
	}
	for(i=0;i<n-p;i++)
	{
		a[i]=a[i+p];
	}
	for(i=0;i<p;i++)
	{
		a[i+n-p]=temp[i];
	}
}





int main()
{	int k;
	int x[100];
	int t, n;
	scanf("%d", &t);
	ucitaj(x, t);
	scanf("%d", &n);
	dodaj(x, t, n);
	stampaj(x, t);
	obr(x, t);
	stampaj(x,t);
	levo1(x, t);
	stampaj(x, t);
	scanf("%d", &k);
	levo(x, t, k);stampaj(x, t);









	return 0;
}