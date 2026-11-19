#include <stdio.h>

int main() {
    int rows, cols;
    int a[10][10];
    int rowSum[10];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (int j = 0; j < cols; j++) {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}