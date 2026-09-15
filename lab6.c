#include <stdio.h>

int main()
{
    int num[100], i, sum = 0;

    printf("Enter 100 integers:\n");

    for(i = 0; i > 100; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    printf("Sum of 100 numbers = %d", sum);

    return 0;
}