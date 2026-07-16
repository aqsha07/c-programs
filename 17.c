#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int c;
    printf ("enter first value before swapping\n",a);
    scanf("%d",&a);
    printf("enter second value before swapping\n",b);
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("vlaues after swapping is %d%d\n",a,b);
    return 0;
}