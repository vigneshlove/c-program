#include <stdio.h>
int main(void) 
{
	char str[50];
	int i,count=0;
	printf("Enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("\nNo of white spaces=%d",count);
	return 0;
}
