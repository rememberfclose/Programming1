#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct vek{int x; int y; int z; double d;};

int main()
{

	FILE* ulaz;
	ulaz=fopen("vektori.txt", "r");
	struct vek nasi[200];
	int n;
	fscanf(ulaz,"%d", &n);
	for (int i = 0; i < n; ++i)
	{
		fscanf(ulaz,"%d %d %d", &nasi[i].x, &nasi[i].y, &nasi[i].z);
		nasi[i].d=sqrt(nasi[i].x*nasi[i].x+nasi[i].z*nasi[i].z+nasi[i].y*nasi[i].y);
	}
	double max=nasi[0].d;
	int j=0;
	for (int i = 0; i < n; ++i)
	{
		if(max<nasi[i].d)
		{
			max=nasi[i].d;
			j=i;
		}
	}

	printf("%d %d %d\n", nasi[j].x, nasi[j].y, nasi[j].z);
	return 0;
}