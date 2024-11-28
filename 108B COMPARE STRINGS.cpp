#include <stdio.h>

int stringCompare(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = stringCompare(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}

