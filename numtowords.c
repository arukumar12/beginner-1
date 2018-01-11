#include<stdio.h>
void main()
{
int n;
printf("enter the number from 0 to 9");
scanf("%d",&n);
switch(n)
{
case 1:printf("\none");
break;
case 2:printf("\ntwo");
break;
default:printf("enter the number from 0 to 9");
break;
}
}
