#include <stdio.h>

int main() {
    float cow, g1, g2, g3, g4, g5, avg_goat;

    printf("গরুর দাম লিখো: ");
    scanf("%f", &cow);

    printf("৫টি ছাগলের দাম লিখো:\n");
    scanf("%f %f %f %f %f", &g1, &g2, &g3, &g4, &g5);

    avg_goat = (g1 + g2 + g3 + g4 + g5) / 5;

    printf("গরুর দাম: %.2f\n", cow);
    printf("ছাগলের গড় দাম: %.2f\n", avg_goat);

    if (cow > avg_goat) {
        printf("গরু লাভবান ✅\n");
    } else if (cow < avg_goat) {
        printf("ছাগল লাভবান ✅\n");
    } else {
        printf("দুজনেই সমানে লাভবান 🤝\n");
    }

    return 0;
}
