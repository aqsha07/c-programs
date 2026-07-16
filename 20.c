#include<stdio.h>
#include<math.h>
int main()
{
    float r,v;
    float pie=3.14;
    printf("enter the radius of sphere\n",r);
    scanf("%f",&r);
    v=(4.0/3.0)*pie*r*r;
    printf("volume of sphere is %f\n",v);
    return 0;
}