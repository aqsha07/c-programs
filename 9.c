#include<stdio.h>
int main()
{
    float celsius;
    float fahrenheit;
    printf("enter the temperature in celsius\n");
    scanf("%f",&celsius);
    fahrenheit=9.0/5.0*celsius+32;
    printf("temperature in fahrenheit is %f",fahrenheit);
    return 0;
}