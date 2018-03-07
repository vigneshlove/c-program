#include <stdio.h>
int main(void) 
{
	char s[50];
	int k,i;
	printf("Enter the string:\n");
	scanf("%s",s);
	printf("Enter the number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("\n%s",s);
	}
	return 0;
}
