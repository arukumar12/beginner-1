#include<stdio.h>
void main()
{
    char s[40],a;
    int i,j;
    printf("enter the string");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>s[j])
            {
                a=s[i];
                s[i]=s[j];
                s[j]=a;
            }
        }
    }
    printf("%s",s);
}
