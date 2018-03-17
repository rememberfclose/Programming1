#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	int i, k;
	int v=0, m=0, n=0, b=0, z=0;

	while((c=getchar())!=EOF)
	{	
		if(isupper(c))
			v++;
		if(islower(c))
			m++;
		if(isdigit(c))
			{n++; z+=c-'0';}
		if(isspace(c))
			b++;


	}

	printf("%d %d %d %d %d\n", v, m, n, b, z);
	return 0;
}