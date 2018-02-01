#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n%2==0)
{
printf("nearest enen number:%d",n-2);
}
else
{
printf("nearest even number:%d",n-1);
}
}
