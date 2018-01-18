#include<stdio.h>
void main()
{
char a[200],count1=0,count2=0;
gets(a);
for(i=0;i!='\0';i++)
{
if((a=='a'&&a=='z')||(a=='A'&&a='Z')
{
count1++;
}
if(a=='0'&&a=='9')
{
count2++;
}
if(count1&&count>0)
printf("yes");
else
printf("no");
}
}
