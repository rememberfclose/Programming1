#include <stdio.h>
#include <stdlib.h>
int main()
{

	int x1, y1, x2, y2, duz, presek, pokr, najmanji;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	if (y1>x2)
	{
		duz=abs(x2-y1);
		printf("duzina:%d\n", duz);
		printf("presek:[%d, %d]\n", x2, y1);}

	else{
		duz=0;
		printf("duzina 0\n presek prazan\n");
	}

	printf("pokr=%d\n", abs(y1-x1)+abs(y2-x2)-duz);

	printf("[%d %d]\n", x1, y2);
	return 0;
}