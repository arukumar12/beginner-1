#include <stdio.h>
void main() {
	int r,i;
	scanf("%d",&r);
	for(i=1;i<r;i++)
	{
		if(r%i==0)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
