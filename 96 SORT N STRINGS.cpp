#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

void sortStrings(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char *arr[MAX_STRINGS];
    char buffer[MAX_STRINGS][MAX_LENGTH];
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume newline character left by scanf

    // Input each string
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(buffer[i], MAX_LENGTH, stdin);
        buffer[i][strcspn(buffer[i], "\n")] = '\0'; // Remove the newline character
        arr[i] = buffer[i];
    }

    // Sort the strings
    sortStrings(arr, n);

    // Print the sorted strings
    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

