#include <stdio.h>
#include <string.h>
struct student
{
	char ime[20];
	float prosek;
	int o1, o2, o3, o4, o5, o6, o7, o8, o9;
};


int main()
{	char name[20];
	int o1, o2, o3, o4, o5, o6, o7, o8, o9;
	struct student studenti[30];
	int i=0, n;
	while((scanf("%s %d %d %d %d %d %d %d %d %d", name, &o1, &o2, &o3, &o4, &o5, &o6, &o7, &o8, &o9))!=EOF)
	{
		strcpy(studenti[i].ime, name);
		studenti[i].prosek=(o1 + o2 + o3 + o4 + o5 + o6 + o7 + o8 + o9)/9.0f;
		studenti[i].o1=o1;
		studenti[i].o2=o2;
		studenti[i].o3=o3;
		studenti[i].o4=o4;
		studenti[i].o5=o5;
		studenti[i].o6=o6;
		studenti[i].o7=o7;
		studenti[i].o8=o8;
		studenti[i].o9=o9;
		i++;
	}
	n=i;
	printf("\nnedovlonji\n");
	for (i=0; i < n; ++i)
	{
		if (studenti[i].o1 == 1 || studenti[i].o2 == 1 || studenti[i].o3 == 1 || studenti[i].o4 == 1 || studenti[i].o5 == 1 || studenti[i].o6 == 1 || studenti[i].o7 == 1 || studenti[i].o8 == 1 || studenti[i].o9 == 1)
		{
			printf("%s\n", studenti[i].ime);
		}
	}
	printf("\nodlicni\n");
	for (i=0; i < n; ++i)
	{
		if (studenti[i].prosek>=4.5)
		{
			printf("%s\n", studenti[i].ime);
		}
	}
	return 0;
}