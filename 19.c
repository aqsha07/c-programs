#include<stdio.h>
#include<math.h>
int main()
{
    float r,h,v;
    float pie=3.14;
    printf("enter the radius of cone\n",r);
    scanf("%f",&r);
    printf("enter the height of cone\n",h);
    scanf("%f",&h);
    v=pie*r*r*h/3;
    printf("volume of cone is %f\n",v);
    return 0;
}