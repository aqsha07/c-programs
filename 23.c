#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    if(a>0)
    printf("number is positive\n");
    else if(a<0)
    printf("number is negative\n");
    else
    printf("number is 0\n");
    return 0;
}
