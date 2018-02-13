#include<stdio.h>
void main()
{
    int a[10],n,k,i,count=0;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter k value");
    scanf("%d",&k);
    printf("enter the values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count++;
        }
    }
    printf("%d",count);
}
