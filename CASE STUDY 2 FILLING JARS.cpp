#include <stdio.h>

int main() {
    int N, M;
    
    printf("Enter the number of jars (N) and the number of operations (M): ");
    scanf("%d %d", &N, &M);

    long long totalCandies = 0;

    for (int i = 0; i < M; i++) {
        int a, b, k;
        printf("Enter the start index (a), end index (b), and number of candies (k) for operation %d: ", i + 1);
        scanf("%d %d %d", &a, &b, &k);
        totalCandies += (b - a + 1) * k;
    }

    long long averageCandies = totalCandies / N;

    printf("The average number of candies per jar is: %lld\n", averageCandies);

    return 0;
}

