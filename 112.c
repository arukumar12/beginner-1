#include<stdio.h>
void main()
{
    int a[10],n,m,i,c;
    printf("enter the value of n & m");
    scanf("%d %d",&n,&m);
    printf("enter the number");
    scanf("%d",&c);
    printf("enter the numbers");
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<c;i++)
    {
        if(a[i]>n&&a[i]<m)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}
