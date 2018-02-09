#include<stdio.h>
int main()
{
  int pow,num,res=1,i;
  scanf("%d",&num);
  scanf("%d",&pow);
  for(i=1;i<=pow;i++)
  {
    res=res*num;
  }
  printf("The power valuve is %d",res);
}
