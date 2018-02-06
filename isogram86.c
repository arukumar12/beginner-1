#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,j,count=0,len;
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s[i]==s[j])
            {
                count=1;
            }
        }
    }
        if(count==1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
