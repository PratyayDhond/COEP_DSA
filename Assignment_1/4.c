/*
    Write a C program to input basic salary of an employee and calculate DA as per 
    following rules:
        For Basic Salary >= 10000 and <= 20000,  10% of basic salary.
        For Basic Salary >  20000 and <= 50000,  15% of basic salary.
        For Basic Salary >  50000 and <= 100000, 20% of basic salary.
        For Basic Salary > 100000 DA is not given.
*/

#include<stdio.h>

int main(){
    float salary;
    float DA;
    printf("Enter your salary: ");
    scanf("%f", &salary);

    if(salary > 100000)
        DA = 0.0;
    else if(salary > 50000)
        DA = salary * 0.2;
    else if(salary > 20000)
        DA = salary * 0.15;
    else if(salary > 10000)
        DA = salary * 0.1;
    else
        DA = 0.0;

    printf("DA for salary %.2f = %.2f\n",salary,DA);    
}