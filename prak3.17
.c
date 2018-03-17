#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vektor {
	double x;
	double y;
	double z;


};




struct vektor vektorski_proizvod(struct vektor u, struct vektor v ){
	struct vektor t;
	double u1=u.x;
	double u2=u.y;
	double u3=u.z;
	double v1=v.x;
	double v2=v.y;
	double v3=v.z;

	t.x=u2*v3-u3*v2;
	t.y=u.z*v.x-u.x*v.z;
	t.z=u.x*v.y-u.y*v.x;
	return t;

}

double skalarni_proizvod(struct vektor u, struct vektor v ){
	float rez;

	rez=u.x*v.x+u.y*v.y+u.z*v.z;
	return rez;

}


int main()
{

	struct vektor u, v, w;

	scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", &u.x, &u.y, &u.z, &v.x, &v.y, &v.z, &w.x, &w.y, &w.z);

	if((fabs(skalarni_proizvod(u, vektorski_proizvod(v,w)))<(pow(10,-5))))
		printf("1\n");
	else printf("0\n");



	return 0;
}