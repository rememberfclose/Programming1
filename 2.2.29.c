#include <stdio.h>
#include <math.h>
int main()
{
	int x, y=0, stp=1, l, d, s;

	scanf("%d", &x);
	while(x>99)
	{
	d=x%10;
	s=(x/10)%10;
	l=(x/100)%10;
	y=y+(d*stp);
	stp=stp*10;
	if(d+l==s)
		{x=x/100;}
	else{x=x/10;}
}
y+=x*stp;
printf("%d\n", y);
return 0;
}
