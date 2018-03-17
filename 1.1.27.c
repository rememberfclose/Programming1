#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned d, s, v;
	unsigned cena_pokv;
	float povrs;
	float cena_ukupna;

	printf("unesi dimen\n");
	scanf("%u%u%u", &d, &s, &v);

	printf("unesi cenu po kvadr\n");
	scanf("%u", &cena_pokv);

	povrs=0.8*(d*s+2*d*v+2*s*v);\

	printf("moler treba okreciti %.2f kvadrata.\n", povrs );
	
	cena_ukupna=povrs*cena_pokv;
	printf("to kosta %.2f rsd.\n", cena_ukupna );
	return 0;
}