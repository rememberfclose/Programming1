#include <stdio.h>
#include <ctype.h>
char sifra(char c, int k)
{
	if(isalpha(c))
	{
		c=c-k;

	}

return c;


}



int main()
{
	char c;
	int k;

	
	scanf("%d", &k);

	while((c=getchar())!=EOF)
	{
	scanf("%c", &c);
	printf("%c\n", sifra(c, k));
	}

	return 0;
}