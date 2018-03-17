#include <stdio.h>
#include <stdlib.h>
int main()
{

	int g, m;

	scanf("%d %d", &g, &m);

	switch(m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("31 dan\n"); break;
	case 2:if((g%4==0 && g%100!=0)||(g%400==0)) printf("29 dana"); else printf("28 dana"); break;
	default: printf("30 dana");
	}
	return 0;
}