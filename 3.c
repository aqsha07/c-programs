#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int sum,sub,mul,div;
    printf("enter the value of a\n",a);
    scanf("%d",&a);
    printf("enter the value of b\n",b);
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("sum of %d and %d is %d\n",a,b,sum);
    printf("subtraction of %d and %d is %d\n",a,b,sub);
    printf("multiplication of %d and %d is %d\n",a,b,mul);
    printf("division of %d and %d is %d\n",a,b,div);
    printf("Thnankyou");
    return 0;
}

    