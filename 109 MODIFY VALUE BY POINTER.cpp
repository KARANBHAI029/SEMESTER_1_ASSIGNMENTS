#include <stdio.h>

int main() {
    int num = 10; // Normal variable
    int *ptr = &num; // Initializing the pointer with the address of 'num'

    // Printing the initial value of 'num'
    printf("Initial value of num: %d\n", num);

    // Using the pointer to modify the value of 'num'
    *ptr = 20;

    // Printing the modified value of 'num'
    printf("Modified value of num: %d\n", num);

    return 0;
}

