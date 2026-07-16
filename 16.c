#include<stdio.h>
#include<math.h>
int main()
{
    float v,r,h;
    float pie=3.14;
    printf("enter the radius of cylinder\n",r);
    scanf("%f",&r);
    printf("enter the height of cylinder\n",h);
    scanf("%f",&h);
    v=pie*r*r*h;
    printf("volume of cylinder is %f\n",v);
    return 0;

}