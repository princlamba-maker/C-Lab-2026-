#include<stdio.h>
int main(){
 int base,exp,i;
    int result = 1;

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(i=1;i<=exp;i++)
       {result=result*base;}
printf("result is :%d",result);
return 0;
}