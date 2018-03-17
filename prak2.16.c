#include <stdio.h>
#include <stdlib.h>
float max(int n, float* s)
{	float mx=s[0];
	for (int i = 1; i < n; ++i)
	{
		if(mx<s[i])
		{
			mx=s[i];
		}
	}

return mx;


}
float min(int n, float* s)
{	float mn=s[0];
	for (int i = 1; i < n; ++i)
	{
		if(mn>s[i])
		{
			mn=s[i];
		}
	}

return mn;


}



int main(int argc, char* argv[])
{

	FILE* ulaz;
	
	unsigned n;
	float s[100];
	if(!(ulaz=fopen(argv[1], "r"))){
		fprintf(stderr, "fajl ne postoji\n");


		fprintf(stdout, "%s\n", "-1");
		return -1;
	}

	fscanf(ulaz, "%u", &n);

	for (int i = 0; i < n; ++i)
	{
		fscanf(ulaz,"%f", &s[i]);
		

	}
	fprintf(stdout, "%.3f\n", max(n,&s[0])-min(n,&s[0]));

	return 0;
}