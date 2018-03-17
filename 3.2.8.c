#include <stdio.h>
#include <stdlib.h>
void inter(int* tacke, int* zarez, char s[])
{	int t=0, z=0;
	int i;

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='.')
			t++;
		else if(s[i]==',')
			z++;

	}
	*tacke=t;
	*zarez=z;

}


int main()
{
	char s[100];
	int x, y;

	scanf("%[^\n]s", s);

	inter(&x, &y, s);
		
	printf("%d %d\n", x, y);


	return 0;
}