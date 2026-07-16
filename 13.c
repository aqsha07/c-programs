#include<stdio.h>
#include<math.h>
int main()
{
    float p,q,r,a,s;
    printf("enter first side of triangle\n",p);
    scanf("%f",&p);
    printf("enter the second side of triangle\n",q);
    scanf("%f",&q);
    printf("enter the third side of triangle\n",r);
    scanf("%f",&r);
    s=(p+q+r)/2;
    printf("semi perimeter of triangle is %f",s);
    a=sqrt(s*(s-p)*(s-q)*(s-r));
    printf("area of triangle is %f",a);
    return 0;

}