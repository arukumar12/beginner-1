#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,a;
    char s[20];
    scanf("%s",&s);
    scanf("%d",&n);
    a=strlen(s);
    for(i=a-n;i<a;i++)
    {
        printf("%c",s[i]);
    }
}
