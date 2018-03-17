#include <stdio.h>

void romb(int n){
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= 2*n+1; ++j)
		{
			if(j<=n-i || j+i>2*n)
				printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}


int main(int argc, char const *argv[])
{	int n;
	scanf("%d", &n);
	romb(n);
	return 0;
}