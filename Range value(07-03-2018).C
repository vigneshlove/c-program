#include <stdio.h>
int main(void) 
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n>=1 && n<=10)
	{
		printf("\n Yes");
	}
	else
	{
		printf("\n No");
	}
	return 0;
}
