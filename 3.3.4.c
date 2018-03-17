#include <stdio.h>
#include <stdlib.h>
int samoglasnik(char c)
{	switch(c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case'u': return 1;
	default: return 0;
}
}

int krajoglasnik(char s[])
{
	int i;
	for (int i = 0;1; ++i)
	{
		if (s[i]=='\0')
		{
			if (samoglasnik(s[i-1]))
			{
				return 1;
			}
			else 
				return 0;
		}
	}




}





int main()
{

	char s[100];
	scanf("%s", s);
	if(krajoglasnik(s))
	{printf("samoglasnik je zadnji\n");
	return 0;}
	printf("nije samoglansik zadnji\n");


	return 0;
}