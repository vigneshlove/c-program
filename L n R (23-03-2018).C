int main(void) 
{
	int n,l,r;
	printf("\n Enter the number:");
	scanf("%d",&n);
	printf("\n Enter the left and right range:");
	scanf("%d %d",&l,&r);
	if(n>l && n<r)
	{
		printf("\n YES");
	}
	else
	{
		printf("\n NO");
	}
	return 0;
}
