#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("%c ", name[0]);

    for (int i = 1; i < lastSpace; i++) {

        if (name[i - 1] == ' ') {
            printf("%c ", name[i]);
        }
    }

    printf("%s", &name[lastSpace + 1]);

    return 0;
}