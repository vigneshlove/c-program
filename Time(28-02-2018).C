#include <stdio.h>
int main(void) 
{
	int min,hrs,mins,secs=00;
	printf("Enter the time in minutes:\n");
	scanf("%d",&min);
	hrs=min/60;
	mins=min%60;
	if(mins>60)
	{
		secs=mins%60;
		mins=mins-secs;
	}
	printf("%d Hrs %d Min and %d Sec",hrs,mins,secs);
	return 0;
}
