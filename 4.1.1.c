#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *in, *out;
char c;

in=fopen("ulazni.txt","r");
out=fopen("izlazni.txt","w");

while((c=fgetc(in))!=EOF)
{
fputc(c, out);
}
return 0;
}

