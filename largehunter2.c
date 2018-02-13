#include<stdio.h>
#include<string.h>
void main()
{
    int n,a[10],k,i,max,temp,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
}
}
