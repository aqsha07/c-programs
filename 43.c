#include<stdio.h>
#include<math.h>
int main()
{
    double base,exponent,result;
    printf("enter the bas number:");
    scanf("%lf",&base);
    printf("enter the exponent:");
    scanf("%lf",&exponent);
    result=pow(base,exponent);
    printf("raised to the power id:%lf\n",result);
    return 0;
}