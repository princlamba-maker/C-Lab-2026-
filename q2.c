# include<stdio.h>
# include<math.h>
int main()
{
    // this program reads marks of 5 subject and calculate total and percentage
int a,b,c,d,e,f,g;
printf(" enter marks of subject 1 : ");
scanf("%d", &a);
printf(" enter marks of subject 2 : ");
scanf("%d", &b);
printf(" enter marks of subject 3 : ");
scanf("%d", &c);
printf(" enter marks of subject 4 : ");
scanf("%d", &d);
printf(" enter marks of subject 5 : ");
scanf("%d", &e);

f=(a+b+c+d+e);
printf("Total is = %d \n", f);

g=(a+b+c+d+e)/5;
printf("Percentage is = %d", g);
return 0;
}