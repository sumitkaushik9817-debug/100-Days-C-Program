#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char input;

    printf("Enter a character: ");
    if (scanf(" %c", &input) != 1) {
        printf("No character was entered.\n");
        return 1;
    }

    if (!isalpha((unsigned char)input)) {
        printf("%c is not an alphabetic character.\n", input);
    } else {
        switch (tolower((unsigned char)input)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a vowel.\n", input);
                break;
            default:
                printf("%c is a consonant.\n", input);
        }
    }

    return 0;
}