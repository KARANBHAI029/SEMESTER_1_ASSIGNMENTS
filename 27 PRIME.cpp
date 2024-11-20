#include<stdio.h>

int main(void) {
    int A, i;

    printf("Enter A: ");
    scanf("%d", &A);

    i = 2;
    if(A < 2) {
        printf("Not a prime number");
    } else {
        while(i <= A/2) {
            if(A % i == 0) {
                printf("Not a prime number");
                break; // exit the loop
            }
            i++;
        }
        
        printf("Prime number");
    }

    return 0;
}


