#include <stdio.h>

int main ()
{
	int dan;
	
	scanf("%d", &dan);
	
	switch(dan){
	case 1: printf("Ponedeljak\n"); break;
	case 2: printf("Utorakk\n"); break;
	case 3: printf("Sreda\n"); break;
	case 4: printf("cetvrtak\n"); break;
	case 5: printf("Petak\n"); break;
	case 6: printf("Subota\n"); break;
	case 7: printf("nedelja\n"); break;
	default: printf("Greska\n"); break;
}
return 0;
}

