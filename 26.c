#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,real,imag;
    printf("enter the value of a :\n");
    scanf("%f",&a);
    printf("enter the value of b :\n");
    scanf("%f",&b);
    printf("enter the value of c :\n");
    scanf("%f",&c);
    d=(b*b-4*a*c);
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
printf("root1 is %f\n",r1);
printf("root2 is %f\n",r2);
}
else if(d==0)
{
    r1=r2=(-b)/(2*a);
    printf("root1 and root2 is %f and %f\n",r1,r2);
}
else
{
    real=(-b)/(2*a);
    imag=(sqrt(-d))/(2*a);
    printf("root1 is %f+%f*i\n",real,imag);
    printf("root2 is %f-%f*i\n",real,imag);}
   return 0;

}