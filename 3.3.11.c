#include <stdio.h>
#include <string.h>
int main()
{
	char src[31], dst[91]="132";
	scanf("%s", src);


	strcpy(dst, src);
	strcat(dst, src);
	strcat(dst, src);

	printf("%s\n", dst);


	return 0;
}