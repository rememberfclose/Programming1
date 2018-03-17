#include <stdio.h>
#include <stdlib.h>
int main()
{
	int dan, mesec, godina, t=0;
	scanf("%d.%d.%d.", &dan, &mesec, &godina);

	if (godina>0 && mesec<=12 && dan <= 31)
	{
		t=1;
	}
	else{printf("greska\n");}



	return 0;
}