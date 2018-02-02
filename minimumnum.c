#include<stdio.h>
void main()
{
    int n[20],i,m;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    m=n[i];
    for(i=0;i<10;i++)
    {
        if(m>n[i])
        {
            m=n[i];
        }
    }
    printf("the minimum number is:%d",m);
}
