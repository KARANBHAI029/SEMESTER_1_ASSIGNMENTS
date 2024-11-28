#include <stdio.h>

void stringReverse(char *str) {
    int length = 0;
    char *start = str;
    char *end;
    char temp;

    // Find the length of the string
    while (*str != '\0') {
        length++;
        str++;
    }

    end = start + length - 1;

    // Swap characters from the beginning and the end
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    stringReverse(str);
    printf("Reversed String: %s\n", str);
    return 0;
}

