include<stdio.h>
void main()
{
int n,s=0,g;
printf("enter the value\n");
scanf("%d",&n);
while(n!=0);
{
g=n%10;
s=s+g;
n=n/10;
}
printf("sum is:%d",s);
}
