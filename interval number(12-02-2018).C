#include<stdio.h>
int main()
{

    int a,b,num,i;
    printf("\n");
    scanf("%d%d",&a,&b);
    {
        for(i=a;i<=b;i++)
        {
            if(i%2==1)
            printf(" %d",i);
        }
    }

}
