#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Just 3 simple swaps if needed — no nesting
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Sorted (small to large): %d %d %d\n", a, b, c);

    return 0;
}
