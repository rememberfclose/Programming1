#include <stdio.h>
#include <stdlib.h>
enum boje {ZELENA, ZUTA, CRVENA};

void semafor(enum boje color)
{
	switch(color)
	{
		case ZELENA:printf("idi\n"); break;
		case ZUTA:printf("USPORI\n"); break;
		case CRVENA:printf("STANI\n"); break;
	}


}



int main()
{
	enum boje col=0;
	
	semafor(col);


	return 0;
}