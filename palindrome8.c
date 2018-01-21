#include<stdio.h>
void main()
{
    char s[100];
    printf("enter the string\n");
    scanf("%s",&s);
    if(s==strrev(s))
    {
        printf("palindrome");
    }
        else
        {
            printf("not palindrome");
        }
    }
