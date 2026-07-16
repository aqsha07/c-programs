#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("eligible to vote\n");
    }
    else
    {
        printf("not eligible to vote\n");
    }
    return 0;
}