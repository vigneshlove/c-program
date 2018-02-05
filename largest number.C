#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<b  &&  a>c)
printf(" The given 1st value %d is a largest number",a);
else if(b>c)
{
printf("The given 2nd value %d is a largest number",b);
}
else
{
printf(" The given 3rd value %d is a largest number",c);
}
return 0;
}
