#include <stdio.h>

int main(void)
{
    char binary[100];
    int count = 0;
    int maximum = 0;

    printf("Enter a binary array: ");
    scanf("%99s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '1') {
            count++;
            if (count > maximum) {
                maximum = count;
            }
        } else {
            count = 0;
        }
    }

    printf("Maximum consecutive 1s: %d\n", maximum);
    return 0;
}
	