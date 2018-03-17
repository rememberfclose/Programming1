#include <stdio.h>
#include <stdlib.h>
int main()
{

	int c,k,i,kus;

	printf("Unesite cenu, kolicinu i dat novac:\n");
	scanf("%d",&c);
	scanf("%d",&k);
	scanf("%d",&i);
	kus=i-(c*k);
	printf("Kusur je : %d dinara\n", kus);

	return 0;
}