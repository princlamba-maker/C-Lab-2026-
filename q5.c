#include<stdio.h>
int main()
{
int a, b, c;
printf("enter two integers: ");
scanf("%d,%d", &a, &b);
printf("before swaping : x=%d and y=%d \n" ,a,b);
c=a;
a=b;
b=c;
printf("after swaping : x=%d and y=%d \n", a,b);
return 0;
}