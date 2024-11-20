#include<stdio.h>

int main() {
    int arr[10], count_even = 0, count_odd = 0;

    printf("Enter 10 array numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    printf("\nCount of even numbers: %d\n", count_even);
    printf("Count of odd numbers: %d\n", count_odd);

    return 0;
}

