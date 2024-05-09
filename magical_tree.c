#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the tree: ");
    scanf("%d", &N);

    // Error handling to ensure N is odd and between 1 and 21
    if (N <= 0 || N % 2 == 0 || N > 21) {
        printf("Invalid input. N must be an odd number between 1 and 21.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
