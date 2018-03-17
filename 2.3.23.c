#include <stdio.h>
#include <stdlib.h>
int prost(int p)
{
	int n=2;
	while(n<p)
	{
		if(p%n==0)
			return 0;
		n++;
	}
	return 1;

}

void pb(int x)
{
	int l=2;
	while(l<x){
	if(prost(l))
		printf("%d\n", l);
	l++;
}
}


int main()
{
	int n;
	scanf("%d", &n);
	pb(n);


	return 0;
}