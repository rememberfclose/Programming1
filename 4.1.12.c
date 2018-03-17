#include <stdio.h>
#include <stdlib.h>
struct student {
	char broj[20];
	double prosek;

};
typedef struct student Student;


int main()
{
	int ocene[10];
	Student sts[100];
	FILE* ulaz;
	float max;
	ulaz=fopen("studenti.txt", "r");

	fscanf(ulaz, "%d %d %d %d %d ", &ocene[0], &ocene[1], &ocene[2], &ocene[3], &ocene[4]);
	sts[0].prosek=(ocene[1]+ocene[0]+ocene[2]+ocene[3]+ocene[4])/5.0;
	max=sts[0].prosek;

	for (int i = 1; (fscanf(ulaz, "%s ", sts[i].broj))==1; ++i)
	{
		
		fscanf(ulaz, "%d %d %d %d %d ", &ocene[0], &ocene[1], &ocene[2], &ocene[3], &ocene[4]);
		sts[i].prosek=(ocene[1]+ocene[0]+ocene[2]+ocene[3]+ocene[4])/5.0;

		if (max<sts[i].prosek)
		{
			max=sts[i].prosek;
		}

	}

			printf("%f\n", max);


	fclose(ulaz);

	return 0;
}