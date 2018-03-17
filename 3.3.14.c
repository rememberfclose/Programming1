#include <stdio.h>
#include <stdlib.h>
void dupl(char t[], char s[])
{
	int i=0, j=0;

	for(i=0;s[i]!='\0'; i++, j=j+2)
	{
		t[j]=s[i];
		t[j+1]=s[i];
	}
	t[j]=s[i];



}



int main()
{
	char t[20], s[20];

	scanf("%s", s);
	dupl(t, s);
	printf("%s\n", t);


	return 0;
}