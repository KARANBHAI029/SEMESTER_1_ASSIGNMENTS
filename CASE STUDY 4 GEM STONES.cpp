#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    int N;
    printf("enter number of rocks");
    scanf("%d", &N);
	printf("enter elements");
    int element_count[ALPHABET_SIZE] = {0};

    for (int i = 0; i < N; i++) {
        char rock[101];
        int current_count[ALPHABET_SIZE] = {0};
        
       
        scanf("%s", rock);

    
        for (int j = 0; rock[j] != '\0'; j++) {
            current_count[rock[j] - 'a'] = 1;
        }

       
        for (int j = 0; j < ALPHABET_SIZE; j++) {
            if (current_count[j] == 1) {
                element_count[j]++;
            }
        }
    }

   
    int gem_count = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (element_count[i] == N) {
            gem_count++;
        }
    }

   
    printf("%d\n", gem_count);

    return 0;
}

