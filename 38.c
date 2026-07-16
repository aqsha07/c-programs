#include<stdio.h>
#include<math.h>
int main()
{
    int num,i;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
    if(num%i==0)
    {printf("smallest divisor of %d is %d\n",num,i);
    break;}
    }
return 0;
}