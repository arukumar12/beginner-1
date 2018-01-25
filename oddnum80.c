#include<stdio.h>
void main()
{
    int a,b,c=0,d;
    printf("enter the numbers");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    printf("the odd values are:");
    while(c!=0)
    {
        d=c%10;
        c=c/10;
        if(d%2!=0)
        {
            printf("%d",d);
        }
    }
    }
