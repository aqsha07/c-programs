#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    printf("enter values of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
    return 0;
}