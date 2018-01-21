#include<stdio.h>
int main()
{
    int m,n,k;
    printf("enter the value\n");
    scanf("%d",&n);
    m=n+1;
    while(m!=0)
    {
        if(m%10==0)
        {
            printf("%d",m);
            break;
        }
        m++;
    }
  
}
