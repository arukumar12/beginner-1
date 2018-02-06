#include<stdio.h>
void main()
{
    char s[100];
    int i;
    printf("enter the string");
    scanf("%[^\n]s",&s);
    s[0]=toupper(s[0]);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            s[i+1]=toupper(s[i+1]);
        }
    }
    printf("%s",s);
}
