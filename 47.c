#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("enter the number of digits:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+(2*i-1);
    }
    printf("sum of %d digits is %d\n",num,sum);
    return 0;
}