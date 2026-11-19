#include <stdio.h>

int main() {
    int rows, cols;
    int a[10][10];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}