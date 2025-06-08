#include <stdio.h>

int main() {
    int a, b, c, d, max;

    // Input 4 values
    printf("Enter 4 integers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Start with a, then compare step by step
    max = a;

    if (b > max) {
        max = b;
    }
    else if (c > max) {
        max = c;
    }
    else (d > max) {
        max = d;
    }

    // Output the largest number
    printf("The largest number is: %d\n", max);

    return 0;
}
