#include <stdio.h>
#include <ctype.h>

int konverzija (int c)
{
	if (isupper(c))
	{
	return tolower(c);
	}
	else if (islower(c))
	{
	return toupper(c);
	}
	else return putchar(c);
	
}

int main() {

	char t=1;
	while(t!=0){
	scanf("%c", &t);
	printf("%c", konverzija(t));
    }
    return 0;
}