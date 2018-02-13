#include<stdio.h>
void main()
{
    int i;
    char a[100];
    scanf("%s",&a);
    i=strlen(a);
    a[i]='.';
    printf(".%s",a);
}
