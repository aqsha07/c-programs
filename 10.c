#include<stdio.h>
int main()
{
    float p,r,t,s;
    printf("enter the value of p\n",p);
    scanf("%f",&p);
    printf("enter the value of r\n",r);
    scanf("%f",&r);
    printf("enter the value of t\n",t);
    scanf("%f",&t);
    s=p*r*t/100;
    printf(" simple interest : %f",s);
    return 0;
}