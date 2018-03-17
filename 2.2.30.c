#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, reveresed=0, ostatak, original;

	scanf("%d", &n);

	original=n;

	while (n!=0)
	{
		ostatak=n%10;
		reveresed=reveresed*10+ostatak;
		n/=10;
	}
	if (original==reveresed)
	{
		printf("palinrom je\n");
		return 0;
	} else
	printf("nije\n");

	return 0;
}