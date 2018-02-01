#include<stdio.h>
void main()
{
int n,r;
printf("enter the number");
scanf("%d",&n);
r=n+0.5;
if(r>n+1)
{
printf("the rounded number is: %d",n+1);
}
else
{
printf("the rounded number is:%d",n);
}
}
