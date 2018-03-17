#include <stdio.h>

long long ocd(int n1, int n2)
{
 	long long i, ocd=1;
    if (n1<0)
    {
    	n1=-n1;
    }
    if (n2<0)
    {
    	n2=-n2;
    }
    for (i = 1; i<=n1 && i<=n2; ++i)
    {
    	if (n1%i==0 && n2%i==0)
    		ocd=i;
    }

    return ocd;
}

struct raz
{
	long long p;
	long long q;
};

struct raz proizvod(struct raz a, struct raz b)
{
struct raz c;
int n;
c.p=a.p*b.p;
c.q=a.q*b.q;
n=ocd(c.p, c.q);
c.p=c.p/n;
c.q=c.q/n;
return c;
}


struct raz zbir(struct raz a, struct raz b)
{
struct raz c;
int n;
c.p=a.p*b.q+b.p*a.q;
c.q=a.q*b.q;
n=ocd(c.p, c.q);
c.p=c.p/n;
c.q=c.q/n;
return c;
}

int main()
{	
struct raz x[100], y[100], z, z1;
z.p=0;
z.q=1;
z1.p=1;
z1.q=1;
int n;
scanf("%d", &n);

for (int i = 0; i < n; ++i)
{
	scanf("%lli %lli", &x[i].p, &x[i].q);
	z=zbir(x[i],z);
	z1=proizvod(x[i], z1);
}
printf("%lli/%lli\n", z.p, z.q);
printf("%lli/%lli\n", z1.p, z1.q);






	return 0;
}