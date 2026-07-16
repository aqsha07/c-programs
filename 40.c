#include<stdio.h>
int main()
{
    int num1,num2,i,GCD,LCM;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    for(i=2;i<=num1&&i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        GCD=i;}
    LCM=(num1*num2)/GCD;
    printf("LCM=%d\n",LCM);
    
    return 0;
}