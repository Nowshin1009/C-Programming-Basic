#include<stdio.h>
int main(){
double Basic_salary,Gross_salary,Rent,Dearness_allow;

printf("Enter Niloy's basic salary : ");
scanf("%lf",&Basic_salary);

Dearness_allow=0.4*Basic_salary;
Rent=0.2*Basic_salary;
Gross_salary=Basic_salary-Gross_salary-Rent ;

printf("Niloy's Gross salary is %.2lf \n",Gross_salary);

return 0;
}
