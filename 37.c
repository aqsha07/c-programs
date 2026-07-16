#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if((num%4==0)&&(num%100!=0)||(num%400==0))
{
    printf("%d is a leap year\n",num);
}
else 
{
    printf("%d is not a leap year\n",num);
}
return 0;
}