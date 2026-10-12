# include<stdio.h>
# include<math.h>
int main()
{
float hra,da,basic_salary,gross_salary;
printf("Enter Basic Salary : ");
scanf("%f", &basic_salary);

// (hra=20% , da=50%)
hra = basic_salary*0.2;
da = basic_salary*0.5;

gross_salary = basic_salary + hra + da;
printf("Gross Salary is : %f", gross_salary);
return 0;

}