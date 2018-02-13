#include<stdio.h>
void main()
{
    int a[10],n,k,i,l,min;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter k value");
    scanf("%d",&k);
    printf("enter the values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            l=a[i];
            a[i]=min;
            min=l;
        }
    }
    printf("the smallest number=%d",a[--k]);
}
