#include <stdio.h>
#include <stdlib.h>
int main()
{

	int dan1, mesec1, godina1, dan2, mesec2, godina2;


	scanf("%d.%d.%d", &dan1, &mesec1, &godina1);
	if (dan1>1)
	{
		dan2=dan1-1;
		mesec2=mesec1;
		godina2=godina1;
	}
	else if (dan1==1 && mesec1==1)
	{
		dan2=31;
		mesec2=12;
		godina2=godina1-1;
	}
	else if (dan1==1 && mesec1==3)
	{
		if (godina1%4==0 || (godina1%100==0 && godina1%400==0) )
		{
			dan2=29;
			mesec2=2;
			godina2=godina1;
		}
	}
	else if (mesec1==2 || mesec1==4 || mesec1==6 || mesec1==8 || mesec1==9 || mesec1==11 || mesec1==1)
		{
			dan2=31;
			mesec2=mesec1-1;
		}
	else if(mesec1==5 || mesec1==7 || mesec1==10 || mesec1==12)
		{
			dan2=30;
			mesec2=mesec1-1;
		}

		printf("prethodni dan je %d.%d.%d.\n", dan2, mesec2, godina2 );

	return 0;
}