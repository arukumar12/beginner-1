#include<stdio.h>
void main()
{
int i,mul=1,n,a[30];  
scanf("%d",&n);
printf("enter numbers");
for(i=1;i<=n;i++)
{
scanf("%d",a[i]);
mul=mul*a[i];
}
  printf("product=%d",mul);
}
