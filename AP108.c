#include<stdio.h>
void main()
{
    int a,b,c,sum=0,i;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    for(i=a;i<=b;i=i+c)
    {
        sum+=i;
    }
    printf("\n%d",sum);
}
