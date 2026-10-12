#include<stdio.h>
int main()
{int x,n;
float y;
    printf("enter the value of x: ");
    scanf("%d",&x);

printf("enter the value of n: ");
    scanf("%d",&n);

    if(n==1)
{y=x+1;}
else if(n==2)
{y=1+x/n;}
else if(n==3)
{y=x*x*x;}
else if (n>3 && n<1)
{y=1+n*x;}
else{
    printf("not a valid input");
} 
printf("y[x,n] is equal to :%f",y);
return 0;
}