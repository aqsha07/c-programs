#include<stdio.h>
int main()
{

    float fahrenheit;
    float celsius;
    printf("enter the temperature in fahrenheit\n",fahrenheit);
    scanf("%f",&fahrenheit);
    celsius=5*(fahrenheit-32)/9;
    printf("temperature in celsius is %f",celsius);
    return 0;
}