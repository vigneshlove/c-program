#include <stdio.h>

int main(void) 
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
