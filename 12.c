#include<stdio.h>
#include<math.h>
int main()
{
    float b;
    float h;
    float a;
    printf("enter base of the triangle\n",b);
    scanf("%f",&b);
    printf("enter height of the triangle\n",&h);
    scanf("%f",&h);
    a=b*h/2;
    printf("area of triangle is %f",a);
    return 0;
}