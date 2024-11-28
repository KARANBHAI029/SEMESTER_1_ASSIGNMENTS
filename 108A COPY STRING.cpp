#include <stdio.h>

void stringCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Make sure destination has enough space
    stringCopy(source, destination);
    printf("Copied String: %s\n", destination);
    return 0;
}

