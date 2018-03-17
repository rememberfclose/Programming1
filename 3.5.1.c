#include <stdio.h>
#include <stdlib.h>
 struct Cmpl
{
	double Im;
	double Re;
};

void pisi(struct Cmpl c)
{
	printf("%.2f+(%.2f)i\n", c.Re, c.Im );


}

struct Cmpl zbir(struct Cmpl c,struct Cmpl b)
{
	struct Cmpl a;
a.Re=c.Re+b.Re;
a.Im=c.Im+b.Im;
return a;

}

struct Cmpl raz(struct Cmpl c,struct Cmpl b)
{
	struct Cmpl a;
a.Re=c.Re-b.Re;
a.Im=c.Im-b.Im;
return a;

}

struct Cmpl pro(struct Cmpl a,struct Cmpl b)
{
	struct Cmpl c;
c.Re=(a.Re*b.Re) + (a.Im*b.Im)*(-1);
c.Im=a.Re*b.Im + (a.Im)*(b.Re);
return c;

}
struct Cmpl delj(struct Cmpl a,struct Cmpl b)
{
	struct Cmpl c;
c.Re=((a.Re*b.Re) + (a.Im*b.Im))/((b.Re)*(b.Re)+(b.Im*b.Im));
c.Im=((a.Im*b.Re) - (a.Re*b.Im))/((b.Re)*(b.Re)+(b.Im*b.Im));
return c;

}

int main()
{
struct Cmpl a, b;
scanf("%lf %lf", &a.Re, &a.Im);
scanf("%lf %lf", &b.Re, &b.Im);
pisi(zbir(a,b));
pisi(raz(a,b));
pisi(pro(a,b));
pisi(delj(a,b));

	return 0;
}