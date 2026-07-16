#include<stdio.h>
#include<math.h>
int main()
{
    float v,l,w,h;
    printf("enter the length of cuboid\n",l);
    scanf("%f",&l);
    printf("enter the width of cuboid\n",w);
    scanf("%f",&w);
    printf("enter the height of cuboid\n",h);
    scanf("%f",&h);
    v=l*w*h;
    printf("volume of cuboid is %f\n",v);
    return 0;
}