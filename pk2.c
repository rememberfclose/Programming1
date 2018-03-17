#include <stdio.h>

int main()
{	

	int d, m, g, lp;
	while(1){
	scanf("%d.%d.%d.", &d, &m, &g);

	if ((g%4==0 && g%100!=0) || (g%400==0 && g%100==0))
	{
		lp=1;
	}
	else lp=0;

	if (d>0 && d<29 && m<13 && g>0)
	{
		printf("dobar\n");
	}
	else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d<=31 && g>0)
		printf("dobar\n");
	else if ((m==4 || m==6 || m==9 || m==11) && d<=30 && g>0)
	printf("dobar\n");
	else if (m==2 && d<=29 && lp)
	{
		printf("dobar\n");
	}
	else
		printf("los\n");}

	return 0;
}