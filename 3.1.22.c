#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1, n2, i, j, p, q;
	int a[100], b[100], unija[200], presek[100], razlika[100];


	scanf("%d", &n1);
	for (int i = 0; i < n1; ++i)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &n2);
	for (int i = 0; i < n2; ++i)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < n1; ++i)
	{
		unija[i]=a[i];
	}
	for (int i = 0; i < n1+n2; ++i)
	{
		unija[n1+i]=b[i];
	}
	for (int i = 0; i < n1+n2; ++i)
	{
		printf("%d ", unija[i]);
	}


	p=0;
	for (int i = 0; i < n1; ++i)
	{
		for (int j = 0; j < n2; ++j)
		{
			if (a[i]==b[j])
			{
				presek[p]=a[i];
				p++;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < p; ++i)
	{
		printf("%d ", presek[i]);
	}

	for (int i = 0; i < n1+n2; ++i)
	{
		razlika[i]=unija[i];
	}
	q=n1+n2;
	for (int i = 0; i < n1+n2; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			if(presek[j]==razlika[i])
				{razlika[i]=NULL;
				q--;}
		}
	}
	printf("\n");
	for (int i = 0; i < q+1; ++i)
	{	if(razlika[i])
		printf("%d ", razlika[i]);
	}

	return 0;
}