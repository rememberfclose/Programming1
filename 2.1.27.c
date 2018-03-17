#include <stdio.h>
#include <stdlib.h>
int main()
{
	char k;
	scanf("%c", &k);

	switch(k)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'U':
		case 'u': printf("samoglasnik\n");
		 break;
		default:printf("nije\n");

	}


	return 0;
}