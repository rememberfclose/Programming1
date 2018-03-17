#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct rec {char s[20]; int pojav;}
;

int fnd(struct rec r[], int n, char s[]){

	for (int i = 0; i < n; ++i)
	{
		if(strcmp(s,r[i].s)==0)
			return i;
	}
return -1;

}




int main()
{

	FILE* ulaz;
	struct rec reci[100];
	char temp[20];
	ulaz=fopen("reci.txt", "r");
	int i=0;
	int n;
	while((fscanf(ulaz, "%s ", temp)!=EOF))
	{
		 if(fnd(reci, i, temp)==-1)
		 {
		strcpy(reci[i].s,temp);
			reci[i].pojav=1;
			i++;
		}
		else 
			reci[fnd(reci, i, temp)].pojav++;
	}	

	n=i;
	for (int i = 0; i < n; ++i)
	{
		printf("%s %d\n", reci[i].s, reci[i].pojav);
	}


	return 0;
}