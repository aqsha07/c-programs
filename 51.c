#include<stdio.h>
int main(){

int a[3][3]; 
int i,j;
printf("enter the elements:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    scanf("%d ",&a[i][j]);
}
}
printf("matrix is:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("%d\t",a[i][j]);
}
printf("\n");
}printf("diagonal matrix is:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
 if(i==j)
 printf("%d ",a[i][j]);

 else
 printf("0 ");
}
printf("\n");
}
    return 0;
}