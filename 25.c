#include<stdio.h>
#include<math.h>
int main()
{
    char c;
    printf("enter a character:\n",c);
    scanf(" %c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='O'||c=='I'||c=='U')
    printf("character is vowel\n");
    else 
    printf("character is consonent\n");
    return 0;
}