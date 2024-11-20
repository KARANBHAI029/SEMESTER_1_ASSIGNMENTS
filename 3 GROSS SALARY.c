#include<stdio.h>

int main()
{
    int salary, hra, other, gross_salary;
    printf("enter the salary, hra, other");
    scanf("%d,%d,%d",&salary,&hra,&other);
    gross_salary= salary + hra + other;
    printf("gross salary is=%d", gross_salary);
    return 0;
}