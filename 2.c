#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("enter a integer\n",a);
    scanf("%d",&a);
    printf("enter a float\n",b);
    scanf("%f",&b);
    printf("enter a character\n",c);
    scanf(" %c",&c);
    printf("integer is:%d\n",a);
    printf("float is:%f\n",b);
    printf("character is:%c\n",c);
    return 0;
}