#include<stdio.h>
#include<math.h>
int main(){
    int a;
    int b;
    printf("enter value of a:\n");
    scanf("%d",&a);
    printf("enter value of b:\n");
    scanf("%d",&b);
    if(a%b==0){
    printf("%d is divisible of %d\n",a,b);}
    else{
    printf("%d is not divisible of %d\n",a,b);
    }
    return 0;


}