#include <stdio.h>

int main() {
    int n;

    printf("Vendos numrin e rreshtave: ");
    scanf("%d", &n);

    // printimi
    for (int i = 0; i < n; i++) {
        // Printimi
        for (int j = 0; j < n - i - 1; j++) {
            printf("- ");
        }

        // Printimi i yjeve
        for (int k = 0; k < i + 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}