#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    const char *filename = "textfile.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    char ch;
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        charCount++;
        
        if (ch == '\n') {
            lineCount++;
        }
        
        if (isspace(ch)) {
            if (inWord) {
                inWord = 0;
                wordCount++;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        wordCount++;
    }

    fclose(file);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}

