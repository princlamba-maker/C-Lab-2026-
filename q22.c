#include<stdio.h>
int main(){
int n,i,f=1;
printf("enter a number: ");
    scanf("%d",&n);

    if (n <0)
    {printf("factorial of negative number is not possible");}
    else{
for(i = 1; i <= n; i++)
    {f=f*i;}
    
    printf("factorial is : %d", f);

    }
return 0;
}