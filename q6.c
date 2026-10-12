#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two integers : ");
    scanf("%d,%d", &a,&b);
printf("before swaping numbers : x=%d and y=%d\n ", a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swaping : x=%d and y=%d", a,b);
return 0;
}