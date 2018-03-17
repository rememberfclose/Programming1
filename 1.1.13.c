#include <stdio.h>

int main ()

{
	int broj, n1, n10, n100, n1000;
	printf("Unesi cetvorocifreni broj\n");
	scanf("%d", &broj);
	n1000=broj/1000;
	broj=broj%1000;	
	n100=broj/100;
	broj=broj%100;
	n10=broj/10;
	broj=broj%10;
	n1=broj/1;
	broj=broj%1;
	printf("proizvod cifara:%d\n", n1*n10*n100*n1000);
	printf("razlika sume krajnjih i srednjih cifara:%d\n", (n1+n100)-(n10+n100));
	printf("suma kvadrata cifara:%d\n", n1*n1+n10*n10+n100*n100+n1000*n1000);
	printf("Obrnut smer: %d\n", n1*1000+n10*100+n100*10+n1000);
	printf("menjanje mesta prve i zadnje:%d\n", n1*1000+n10*10+n100*100+n1000);


return 0;
}

