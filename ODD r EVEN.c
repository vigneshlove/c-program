#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("The given number is EVEN:\n");
	}
	else
	{
			printf("The given number is ODD:\n");
	}
	return 0;
}
