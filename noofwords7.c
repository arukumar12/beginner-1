#include<stdio.h>
void main()
{
char s[200];
int i,count=1;
printf("enter the string\n");
scanf("%s",&s[i]);
for(i=0;i!=strlen(s);i++)
{
if(s[i]==' ')
{
count=count+1;
}
printf("no of words\n:%d",count);
}
}
