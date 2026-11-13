//PROGRAM 8-Check whether a string is a Palindrome String or not.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    j = len - 1;
    for (i = 0; i < j; i++) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        j--;
    }

    if (flag == 1) {
        printf("Palindrome string.\n");
    }
    else {
        printf("Not a palindrome string.\n");
    }

    return 0;
}
