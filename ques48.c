#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    scanf("%d", &n);

    if (n >= 1)
        sum = 1;

    for (int i = 2; i <= n; i++) {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}