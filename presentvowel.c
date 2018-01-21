#include<stdio.h>
void main()
{
char s[100];
int i,count1=0;;
printf("Enter the string:");
gets(s);
for(i=0;i!=strlen(s);i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
count1++;
}
if(count1==0)
printf("no Vowel");
else
printf("yes Vowel is present");
}
