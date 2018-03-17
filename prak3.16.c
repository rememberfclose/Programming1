#include <stdio.h>
#include <ctype.h>
int razlika(char* s){
int i=0, v=0, m=0;
while(s[i]!='\0'){
	if(isupper(s[i]))
		v++;
	else if(islower(s[i]))
		m++;
i++;
}
return m-v;

}


int main()
{
char niska[20];
scanf("%s", niska);
printf("%d\n", razlika(niska));


	return 0;
}