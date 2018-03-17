#include <stdio.h>
#include <string.h>
#include <ctype.h>
void obrni(char* a, char* b){
	int i=0; int k=strlen(a);
	while(a[i]!='\0'){
		b[k-1-i]=a[i];
		i++;
	}
	b[k]='\0';
}

int pal(char* a, char*b){
	obrni(a, b);
	if(strcmp(a,b)==0)
	return 1;


	return 0;
}


int main()
{	char a[200];
	char a1[200];
	char b[200];
	FILE* ulaz, *izlaz;
	ulaz=fopen("razno.txt", "r");
	izlaz=fopen("palindromi.txt", "w");
	while((fscanf(ulaz,"%s ", a))==1)
	{	for(int i=0;a[i]!='\0';i++)
		{
			a1[i]=tolower(a[i]);
		}
		a1[(strlen(a))]='\0';
		if(pal(a1,b))
		fprintf(izlaz,"%s ",a);
	}
	
	

	
	
	return 0;
}