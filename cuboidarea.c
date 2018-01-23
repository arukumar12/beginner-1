#include<stdio.h>
void main()
{
    float width,height,length;
    float surarea,volume;
    printf("enter the width,height and length\n");
    scanf("%f %f %f",&length,&width,&height);
    surarea=2*(length*height+length*width+width*height);
    volume=length*width*height;
    printf("the surface area of cuboid is=%.3f\n",surarea);
    printf("the volume of cuboid is=%.3f\n",volume);
}
