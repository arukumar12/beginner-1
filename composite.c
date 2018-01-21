#include<stdio.h>
void main()
{
int m,i,count1=0;
printf("enter the value\n");
scanf("%d",&m);
for(i=2;i<=(m/2);i++)
{
if(m%i==0)
{
count1++;
}
if(count1==0)
{
printf("prime");
}
else
{
printf("no prime");
}
}
}
