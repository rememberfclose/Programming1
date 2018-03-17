#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE* ulaz;
	ulaz=fopen(argv[1], "r");
	int otv=0;
	char temp;
	while((temp=fgetc(ulaz))!=EOF)
	{
		if(temp=='(')
			otv++;
		else if(temp==')')
			otv--;
		if(otv<0)
			{printf("nisu\n");return 0;}
	}
	if(otv==0)
	printf("jesu\n");
	else
		printf("nisu\n");

	return 0;
}