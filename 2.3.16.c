#include <stdio.h>
#include <stdlib.h>

int zapis(int x, int y)
{	unsigned pro1=1;
	unsigned pro2=1;
	int p;
	x=abs(x);
	y=abs(y);
	while(x)
	{
		p=x%10;
		if(p==1)
		pro1=pro1*2;
		else if(p==2)
		pro1=pro1*3;
		else if(p==3)
		pro1=pro1*5;
		else if(p==4)
		pro1=pro1*7;
		else if(p==5)
		pro1=pro1*11;
		else if(p==6)
		pro1=pro1*13;
		else if(p==7)
		pro1=pro1*17;
		else if(p==8)
		pro1=pro1*19;
		else if(p==9)
		pro1=pro1*23;
		else if(p==0)
		pro1=pro1*29;
		x/=10;
	}
		while(y)
	{
		p=y%10;
		if(p==1)
		pro2=pro2*2;
		else if(p==2)
		pro2=pro2*3;
		else if(p==3)
		pro2=pro2*5;
		else if(p==4)
		pro2=pro2*7;
		else if(p==5)
		pro2=pro2*11;
		else if(p==6)
		pro2=pro2*13;
		else if(p==7)
		pro2=pro2*17;
		else if(p==8)
		pro2=pro2*19;
		else if(p==9)
		pro2=pro2*23;
		else if(p==0)
		pro2=pro2*29;
		y/=10;
	}

	if (pro1==pro2)
	{
		return 1;
	}
	else return 0;

}




int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	if(zapis(a, b))
	printf("isti");
	else printf("nisu isti");

	return 0;
}