#include <stdio.h>
#include <stdlib.h>
void kopi(char t[], char s[], int n)
{	int i;
	for (int i = 0; i < n; ++i)
	{
		t[i]=s[i];
	}
}

int main()
{
	char niska1[20], niska2[20]; int x;

	scanf("%s", niska1);
	scanf("%d", &x);
	kopi(niska2, niska1, x);
	printf("%s\n", niska2);


	return 0;
}