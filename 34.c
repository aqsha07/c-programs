#include<stdio.h>
int main()
{
    int num,digit;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(;num!=0;num=num/10)
   { digit=num%10;
    sum=sum+digit;
     }
     printf("sum of digits is:%d",sum);
    return 0;
   
}