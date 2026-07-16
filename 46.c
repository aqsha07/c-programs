#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("enter the number of digits:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("sum of %d digits is %d",num,sum);
return 0;
}