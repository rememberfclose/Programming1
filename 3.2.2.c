#include <stdio.h>
#include <stdlib.h>
void boje(int r, int g, int b, float *c, float *m, float *y)
{
	*c=1-r/255.0f;
	*m=1-g/255.0f;
	*y=1-b/255.0f;




}


int main()
{
	int r, g, b;
	float c, m, y;

	scanf("%d %d %d", &r, &g, &b);
	boje(r, g, b, &c, &m, &y);
	printf("%.2f %.2f %.2f\n", c, m, y);

	return 0;
}