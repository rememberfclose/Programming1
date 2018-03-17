#include <stdio.h>

int sadr(int a[100], int n, int p)
{	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
			return 1;

	}

return 0;


}
void ucitaj(int a[100], int n)
{
	int i;

	for(i=0;i<n;i++)
	{scanf("%d", &a[i]);}
}

int poz(int a[100], int n, int p)
{	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
			return i;
	}

return -1;
}
int pal(int a[100], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[n-1-i])
			return 0;
	}
	return 1;
}

int posl(int a[100], int n, int p)
{	int i;
	for(i=n;i>0;i--)
	{
		if(a[i]==p)
			return i;
	}

return -1;
}

int neop(int a[100], int n)
{	int i;

for(i=0;i<n-1;i++)
{
	if(a[i]>a[i+1])
		return 0;
}
return 1;



}


int main()
{
	int x[100], t, m;
	scanf("%d", &t);
	ucitaj(x, t);
	scanf("%d", &m);
	if(sadr(x, t, m))
		printf("sadrzi %d\n", m);
	else printf("ne sadrzi %d\n", m);
	if(poz(x, t, m)!=-1)
		printf("index mu je %d\n", poz(x, t, m));
	if(posl(x, t, m)!=-1)
		printf("index mu je %d\n", posl(x, t, m));
	if(pal(x, t))
		printf("jeste pal\n");
	else
		printf("nije pal\n");
	if(neop(x, t))
		printf("neopadajuci je\n");
	else printf("opada\n");
	


return 0;

}