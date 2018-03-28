#include <stdio.h>

int main(void) 
{
	int n1,n2,diff;
	printf("Enter the number1:");
	scanf("%d",&n1);
	printf("Enter the number2:");
	scanf("%d",&n2);
	diff=n1-n2;
	if(diff%2==0)
	{
		printf("\nEven");
	}
	else
	{
		printf("\nOdd");
	}
	return 0;
}
