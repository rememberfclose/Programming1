#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
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

int main()
{
	time_t t;
	int i;
	double pi, prob;
	int rez=0;
	double max=5000;
	srand((unsigned) time(&t));

	for (int i = 0; i < max; ++i)
	{
		if(ocd(rand()%1200, rand()%1200)==1)
			rez++;
	}
	prob=(float)rez/max;
	pi=sqrt(6/prob);
	printf("%lf\n", pi);
	return 0;
}