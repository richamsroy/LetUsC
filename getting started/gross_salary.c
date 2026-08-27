#include<stdio.h>
int main()
{
    float basic_salary, gross_salary, DA, HRA;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    DA = 0.4 * basic_salary;
    HRA = 0.2 * basic_salary;
    gross_salary = basic_salary + DA + HRA;
    printf("Gross Salary: %.2f\n", gross_salary);
    return 0;
}