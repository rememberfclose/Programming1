#include <stdio.h>
#include <math.h>
int main()
{
	

	int x, p, c, ostatak, novi, komad;

	scanf("%d %d %d", &x, &p, &c);

	komad=x/pow(10, p);
	ostatak=x-(komad*pow(10, p));

	novi=komad*pow(10, p+1)+c*pow(10,p)+ostatak;

	printf("%d", novi);




	return 0;
}