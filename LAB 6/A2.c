// Enter basic salary of an employee and calculate Gross salary according to given 
// conditions: 
// -Basic Salary >= 10000 : HRA = 20% of basic,DA = 80% of basic
// - Basic Salary >= 20000 : HRA = 25% of basic,DA = 90% of basic
// - Basic Salary >= 30000 : HRA = 30% of basic,DA = 95%
// gross_salary = basic_salary + hra + da
#include<stdio.h>
void main()
{
    int salary,hra,da;

    printf("ENTER THE SALARY OF AN AMPLOYEE : ");
    scanf("%d",&salary);

    if(salary>=10000)
    {
        hra/*hous rent allocation*/=0.20*salary;
        da/*Dearness Allowance*/=0.80*salary;
    }
    else if(salary>=20000)
    {
        hra/*hous rent allocation*/=0.25*salary;
        da/*Dearness Allowance*/=0.90*salary;
    }
    else if(salary>=30000)
    {
        hra/*hous rent allocation*/=0.30*salary;
        da/*Dearness Allowance*/=0.95*salary;
    }
    
    int gross_salary;

    gross_salary = salary + hra + da; 
    printf("\t\t\tHOUSE RENT ALLOCATION (HRA) : %d\n",hra);
    printf("\t\t\tDEARNESS ALLOWANCE (DA) : %d",da);

    printf("\t\t\tGROSS SALARY (GS) : %d",gross_salary);
}