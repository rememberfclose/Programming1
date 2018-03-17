#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct tac{int x; int y;};

int PozMaxa(struct tac tacke[], int n, int k)
{	int q=-1, p=0;
	int max, indikator=0;
	int i=0;
	if(k==1)
	{	for(i=0;i<n;i++)
			{
				if((tacke[i].x>0 && tacke[i].y>0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				q=i;indikator++; break;
				}
			}
			if(!(indikator))
				return q;
			for (int i = 0; i < n; ++i)
			{ 	
				if (max<(abs((tacke[i].x-tacke[i].y))) && (tacke[i].x>0 && tacke[i].y>0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				q=i;}
			}

		return q;
	}
	else if(k==2)
	{	for(i=0;i<n;i++)
			{
				if((tacke[i].x<0 && tacke[i].y>0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				q=i; indikator++; break;
				}
			}
			if(!(indikator))
				return q;
			for (int i = 0; i < n; ++i)
			{ 	
				if (max<(abs((tacke[i].x-tacke[i].y))) && (tacke[i].x<0 && tacke[i].y>0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				q=i;}
			}

		return q;
	}
	else if(k==3)
	{	for(i=0;i<n;i++)
			{
				if((tacke[i].x<0 && tacke[i].y<0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				 q=i;indikator++;break;
				}
			}
			if(!(indikator))
				return q;
			for (int i = 0; i < n; ++i)
			{ 	
				if (max<(abs((tacke[i].x-tacke[i].y))) && (tacke[i].x<0 && tacke[i].y<0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				q=i;}
			}
	
		return q;
	}
	else if(k==4)
	{	for(i=0;i<n;i++)
			{
				if((tacke[i].x>0 && tacke[i].y<0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				q=i;indikator++; break;
				}
			}
			if(!(indikator))
				return q;
			for (int i = 0; i < n; ++i)
			{ 	
				if (max<(abs((tacke[i].x-tacke[i].y))) && (tacke[i].x>0 && tacke[i].y<0))
				{max=(abs((tacke[i].x-tacke[i].y)));
				q=i;}
			}

		return q;
	}
}


int main(int argc, char *argv[])
{	if(argc!=3)
	{printf("pogresan poziv programa\n"); return 0;}

	struct tac tacke[100];
	int n, k;
	n=atoi(argv[1]);
	k=atoi(argv[2]);
	

	if (n<=0)
	{
		printf("pogresan unos broja tacaka\n");
		return 0;
	}
	if (k<=0 || k>4)
	{
		printf("pogresan unos kvadranata\n");
		return 0;
	}
		for (int i = 0; i < n; ++i)
	{
		scanf("%d %d", &tacke[i].x, &tacke[i].y);
	}
	int maxic=PozMaxa(tacke, n, k);
	if(maxic==-1)
		printf("nema nijednog odatle\n");
	else
	printf("(%d, %d)\n", tacke[maxic].x, tacke[maxic].y);
	return 0;	
}
