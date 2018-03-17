#include <stdio.h>
#include <stdlib.h>

void kvadriranje (float a[], int n){
		for (int i = 0; i < n; i=i+2)
	{
		a[i]=a[i]*a[i];
	}
	

}


int main()
	{ float a[100];

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%f", &a[i]);
	}
	kvadriranje(a,n);
	for (int i = 0; i < n; ++i)
	{
		printf("%.2f ", a[i]);
	}
	

	return 0;
}