#include<stdio.h>
int main()
{
    int a;
    int b;
    int r,q;
    printf("enter the value of a\n",a);
    scanf("%d",&a);
    printf("enter the value of b\n",b);
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("remainder of %d and %d is %d\n",a,b,r);
    printf("quotient pf %d and %d is %d\n",a,b,q);
    return 0;


}