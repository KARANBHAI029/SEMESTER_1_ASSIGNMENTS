#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("The squares of numbers from 1 to %d are:\n", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i * i);
    }
    
    printf("\n");
    return 0;
}

