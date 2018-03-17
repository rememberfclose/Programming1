#include <stdio.h>
#include <stdlib.h>

void odredi_ocene(float poeni[], int n, unsigned ocene[])
{
for (int i = 0; i < n; ++i)
{
	if(poeni[i]<50)
	{
		ocene[i]=5;
	}
	else if(poeni[i]>50 && poeni[i]<61)
	{
		ocene[i]=6;
	}
	else if(poeni[i]>=61 && poeni[i]<71)
	{
		ocene[i]=7;
	}
	else if(poeni[i]>=71 && poeni[i]<81)
	{
		ocene[i]=8;
	}
	else if(poeni[i]>=81 && poeni[i]<91)
	{
		ocene[i]=9;
	}
	else if(poeni[i]>=91 && poeni[i]<=100)
	{
		ocene[i]=10;
	}

}

}

int main()
{

	
	float a[100];
	float temp;
	unsigned ocena[100];
	int i=0;
	int n=0;

	while(1)
	{
		scanf("%f", &temp);
		if(temp==-1)
			break;
		
		n++;
		a[i]=temp;
		i++;
	}
	odredi_ocene(a, n, ocena);

	for (int i = 0; i < n; ++i)
	{
		printf("%u ", ocena[i]);
	}
	printf("\n");

	return 0;
}