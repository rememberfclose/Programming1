#include <stdio.h>
#include <stdlib.h>
int main()
{
	int broj;
	char j, d , s, h;
	scanf("%d", &broj);

	j=broj%10;
	d=(broj/10)%10;
	s=(broj/100)%10;
	h=broj/1000;

	if (j<d && d<s && s<h)
	{
		printf("opadajuce\n");
	}
	else if (j>d && d>s && s>h)
	{
		printf("rastyce\n");
	}
	else {printf("nikakva je\n");}

	return 0;
}