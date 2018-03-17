#include <stdio.h>
#include <stdlib.h>
int main()
{

	int n, a=0, e=0, i=0, o=0, u=0;
	char c;
	scanf("%d", &n);

	while(n>-1)
	{
		c=getchar();
		if (c=='a' || c=='A')
		{
			a++;
		}
		if (c=='e' || c=='E')
		{
			e++;
		}
		if (c=='o' || c=='O')
		{
			o++;
		}
		if (c=='i' || c=='I')
		{
			i++;
		}
		if (c=='u' || c=='U')
		{
			u++;
		}

		n--;
	}

	printf("a:%d\n e:%d\n i:%d\n o:%d\n u:%d\n", a, e, i, o, u);
	return 0;
}