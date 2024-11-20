#include <stdio.h>

int main() {
    int x, n;
    double Y;

    printf("Enter values for x and n:\n");
    scanf("%d %d", &x, &n);

    if (n == 1) {
        Y = 1 + x;
    } else if (n == 2) {
        Y = 1 + (double)x / n;
    } else if (n == 3) {
        Y = 1;
        int i = 0;
        while (i < n) {
            Y *= x;
            i++;
        }
        Y += 1;
    } else {
        Y = 1 + n * x;
    }

    printf("Y(x, n) = %lf\n", Y);

    return 0;
}
