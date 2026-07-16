#include<stdio.h>
#include<math.h>
int main()
{
    float r;
    float s;
    float a;
    printf("enter first daigonal of rhombus\n",r);
    scanf("%f",&r);
    printf("enter second diagonal of rhombus\n",s);
    scanf("%f",&s);
    a=r*s/2;
    printf("area of rhombus is %f\n",a);
    return 0;
}