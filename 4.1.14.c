#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * rotacija(char a[]){
	int posl=strlen(a)-1;
	char temp;
	int i=0;
	temp=a[0];
	while(i!=posl)
	{a[i]=a[i+1];
		i++;
	}	
	a[posl]=temp;
	return a;
}



int main()
{
	char s[100];
	FILE* izlaz;

	izlaz=fopen("rotacije.txt", "w");
	scanf("%s", s);
	fprintf(izlaz, "%s\n", s);
	for (int i = 0; i < strlen(s)-1; ++i)
	{
		fprintf(izlaz,"%s\n", rotacija(s));
	}
	
	
fclose(izlaz);

	return 0;
}