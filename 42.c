#include<stdio.h>
int main()
{
int num,rev=0,digit,original;
printf("enter a number:");
scanf("%d",&num);
original =num;
for(;num>0;num/=10)
{digit=num%10;
rev=rev*10+digit;
}
if(rev==original)
printf("palindrome\n");
else
printf("not palindrome\n");
return 0;
}
