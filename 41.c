#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    while(n%i==0)
{
    printf("prime factors :%d",i);
    n/=i;
}}
return 0;
}