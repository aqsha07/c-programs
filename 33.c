#include<stdio.h>
int main()
{
    int num,rev=0,digit;
    printf("enter a number:");
    scanf("%d",&num);
    for(;num!=0;num=num/10)
    {
        digit=num%10;
        rev=rev*10+digit;
    }
    printf("reverse is:%d",rev);
    return 0;
}
   