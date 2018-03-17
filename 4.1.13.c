#include <stdio.h>
#include <math.h>
struct tacka{ double x, y, d;};

double D(double a, double b){
	double d;
	d=sqrt(a*a+b*b);
return d;
}

int main(int argc, char const *argv[])
{
	struct tacka nase[50];
	FILE *ulaz, *izlaz;

	ulaz=fopen("tacke.txt", "r");
	izlaz=fopen("rastojanja.txt", "w");
	int n;
	fscanf(ulaz, "%d", &n);
	for (int i = 0; i < n; ++i)
	{
		fscanf(ulaz, "%lf %lf ", &nase[i].x, &nase[i].y);
		nase[i].d=D(nase[i].x, nase[i].y);
		fprintf(izlaz, "%f \n", nase[i].d);
	}
	double max=nase[0].d;int im=0;
	for (int i = 1; i < n; ++i)
	{
		if(nase[i].d>max)
		{
			max=nase[i].d;
			im=i;
		}
	}
	printf("Najudaljenije od koordinatnog pocetka je: %.0lf %.0lf\n", nase[im].x, nase[im].y);
	return 0;
}