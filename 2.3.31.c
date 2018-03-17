#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int pres(int g)
{
if((g%4==0 && g%100!=0) || g%400==0)
return 1;
return 0;

}
void main ()
{
int g1, g2, i;

scanf("%d %d", &g1, &g2);

while(g1!=g2+1)
{
if(pres(g1))
printf("%d ", g1);



g1++;
}




}
