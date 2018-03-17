#include <stdio.h>
#include <stdlib.h>
int main()
{

	
	int d, m;
	printf("Unesite datum\n");
	scanf("%d%d", &d, &m);

	switch(m)
	{
		case 1:
		case 2: printf("Zima\n:"); break;
		case 3: if (d<21)
			printf("Zima\n:");
			else printf("prolece\n:"); break;
		case 4:
		case 5: printf("prolece\n:"); break;
		case 6: if (d<21)
			printf("prolece\n:");
			else printf("leto\n:"); break;
		case 7:
		case 8: printf("Leto\n:"); break;
		case 9: if (d<23)
			printf("leto\n:");
			else printf("jesen\n:"); break;
		case 10:
		case 11: printf("jesen\n:"); break;
		case 12: if (d<22)
			printf("Jesen\n:");
			else printf("zima\n:"); break;
	}

	return 0;
}