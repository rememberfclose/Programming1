#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sati, minuti;

	scanf("%d %d", &sati, &minuti);

	printf("%d %d\n",(60*sati)+minuti, ((60*sati)+minuti)*60);
	


	return 0;
}