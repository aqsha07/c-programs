#include<stdio.h>
#include<math.h>
int main()
{
    float r;
    float a;
    float c;
    float pie=3.14;
    printf("enter the radius of circle\n",r);
    scanf("%f",&r);
    a=pie*r*r;
    c=2*pie*r;
    printf("area of circle is %f\n",a);
    printf("circumference of circle is %f\n",c);
    return 0;
}