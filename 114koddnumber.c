#include<stdio.h>
void main()
{
    int a,c,s[10],i,count=0;
    printf("enter the a ");
    scanf("%d",&a);
    printf("the searched number");
    scanf("%d",&c);
    for(i=0;i<a;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<a;i++)
    {
        if(s[i]%2==1)
        {
            count+=1;
        }
        if(count==c)
        {
            printf("%d",s[i]);
        }
    }
}
