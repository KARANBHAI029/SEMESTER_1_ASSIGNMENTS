#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int divisor = pow(10, n);
    int remainder = num % divisor;
    int reversedRemainder = 0;

    while (remainder != 0) {
        reversedRemainder = reversedRemainder * 10 + remainder % 10;
        remainder /= 10;
    }

    return (num / divisor) * divisor + reversedRemainder;
}

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of last digits to flip: ");
    scanf("%d", &n);

    int result = flip(num, n);
    printf("Result after flipping the last %d digits: %d\n", n, result);

    return 0;
}

