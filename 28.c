#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter value of a:\n");
    scanf("%d",&a);
    printf("enter value of b:\n");
    scanf("%d",&b);
    printf("enter value of c:\n");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%dis lagest \n",a);
    }
    else if (b>a && b>c)
        {
        printf("%d is largest \n",b);
        }
        else 
        {
        printf("%dis largest \n",c);
    }
        if (a<b && a<c){
        printf("%dis smallest \n",a);
    }
         else if(b<a && b<c){
            printf("%d is smallest \n",b);
        }
         else{
         printf("%c is smallest \n",c);
        }
return 0;
}