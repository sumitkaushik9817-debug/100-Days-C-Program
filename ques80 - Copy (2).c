#include <stdio.h>

int main() {
    int n, m;
    int a[10][10];
    int distinct = 1;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}