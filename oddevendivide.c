#include<stdio.h>
void main()
{
    char s[100],odd[25],even[25];
    int i,o=0,e=0;
    printf("enter the string");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
        {
            odd[o]=s[i];
            o++;
        }
        else
        {
            even[e]=s[i];
            e++;
        }
        }
        printf("the strings are:%s %s",odd,even);
    }
