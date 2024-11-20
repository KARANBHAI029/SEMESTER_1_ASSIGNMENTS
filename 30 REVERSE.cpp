#include<stdio.h>

int main(void) {
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("reverse of number is %d",reverse);
    
}

