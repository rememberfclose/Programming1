#include <stdio.h>
#include <ctype.h>
#define MAX 100
void modifikacija(char* s, char* t, int* br_mod)
{	int i, k=0;
	for(i=0;s[i]!='\0';i++)
	{	if(islower(s[i]))
		{
		t[i]=s[i]-32;
		k++;
		}
		else
			t[i]=s[i];

	}
	*br_mod=k;

}

int main()
{

char s[MAX], t[MAX];
int n;


scanf("%s", s);
modifikacija(s, t, &n);

printf("%s\n", t);
printf("%d\n", n);


	return 0;
}