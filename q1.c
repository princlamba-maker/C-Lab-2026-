# include<stdio.h>
#include<math.h>
int main()
{
   float p,r,t,Simple_Intrest;
   printf("Enter Principal Value: ");
   scanf( "%f", &p);
   
   printf("Enter Rate of Intrest: ");
   scanf( "%f", &r);

printf("Enter Time Period: ");
scanf("%f", &t);

//calculation of simple intrest
Simple_Intrest = (p*r*t)/100;
printf("Simple Intrest: %f",Simple_Intrest);
return 0;
}