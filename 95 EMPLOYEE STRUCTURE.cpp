#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 50

struct Employee {
    int empNumber;
    char empName[100];
    float basicPay;
};

int main() {
    struct Employee employ[MAX_EMPLOYEES]; // Array of structure with 50 elements
    struct Employee *empPtr; // Structure pointer
    int n, i;

    // Input the number of employees
    printf("Enter the number of employees (up to 50): ");
    scanf("%d", &n);

    if (n > MAX_EMPLOYEES) {
        printf("Error: Can only enter up to 50 employees.\n");
        return 1;
    }

    // Read 'n' employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employ[i].empNumber);
        printf("Employee Name: ");
        scanf(" %[^\n]s", employ[i].empName);
        printf("Basic Pay: ");
        scanf("%f", &employ[i].basicPay);
    }

    // Print the list of all employees along with the basic pay
    printf("\nList of Employees:\n");
    for (i = 0; i < n; i++) {
        empPtr = &employ[i];
        printf("Employee Number: %d\n", empPtr->empNumber);
        printf("Employee Name: %s\n", empPtr->empName);
        printf("Basic Pay: %.2f\n", empPtr->basicPay);
        printf("-----------------------\n");
    }

    return 0;
}

