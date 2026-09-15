//ques1 wap to find total no. of prime numbers in agiven range ?

#include <stdio.h>

int main() {
    int start, end, i, j, count = 0, isPrime;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            count++;
    }

    printf("Total prime numbers between %d and %d = %d\n", start, end, count);

    return 0;
}