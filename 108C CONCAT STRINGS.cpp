#include <stdio.h>

void stringConcat(char *destination, char *source) {
    while (*destination != '\0') {
        destination++;
    }
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

int main() {
    char destination[50] = "Hello, ";
    char source[] = "World!";
    stringConcat(destination, source);
    printf("Concatenated String: %s\n", destination);
    return 0;
}

