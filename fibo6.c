#include<stdio.h>
void main()
{
int n,m,f1=0,f2=1,sum=0;
printf("enter the value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",f2);
sum=f1+f2;
f1=f2;
f2=sum;
}
}
