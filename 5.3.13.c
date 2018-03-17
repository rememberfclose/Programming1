#include <stdio.h>
#include <stdlib.h>

enum boja {plava=1, zuta, crvena, zelena};
struct Lopta
{	int r;

enum boja x;
};

int main()
{
	float zap=0;
	int n, i, col, prec, k=0;
	scanf("%d", &n);
	struct Lopta ball[50];
	for (int i = 0; i < n; ++i)
	{
		
		scanf("%d %d", &ball[i].r, &col);
		switch(col)
		{
			case 1:ball[i].x=plava; break;
			case 2:ball[i].x=zuta; break;
			case 3:ball[i].x=crvena; break;
			case 4:ball[i].x=zelena; break;


		}

	}
		for (int i = 0; i < n; ++i)
		{
			zap+=(ball[i].r*ball[i].r*ball[i].r*3.1415*4)/3;
		}	
		printf("%.2f\n", zap);

		for (int i = 0; i < n; ++i)
		{
			if (ball[i].x==crvena)
			{
				k++;
			}
		}	
		printf("%d crvenih\n", k);


	return 0;
}