#include<stdio.h>
void main()
{
    char s[50];
    int i;
    printf("enter the string:");
    scanf("%s",&s[i]);
    printf("the numbers are:");
    for(i=0;s[i]!='\0';i++)
    {
        if(isdigit(s[i]))
        {
            printf("%c",s[i]);
            
        }
    }
}
