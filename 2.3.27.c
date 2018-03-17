#include <stdio.h>
#include <stdlib.h>
int preb(float x)
{	float y;
	int preb=0;


	do{
		scanf("%f", &y);
		if(x==y)
			preb++;
	}while(y!=0);

	return preb;

}
int main()
{	float k;
	int br;

	scanf("%f", &k);
	br=preb(k);
	printf("%d\n", br);


	return 0;
}