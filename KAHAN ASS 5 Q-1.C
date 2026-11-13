//PROGRAM 1-Find out length of a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("Length = %d", len);

    return 0;
}
