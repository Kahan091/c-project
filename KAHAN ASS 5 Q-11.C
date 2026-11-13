//PROGRAM 11-Print reversed string vertically character by character.

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}
