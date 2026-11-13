//PROGRAM 6-Compare two strings lexicographically and print which one is greater or lower or print both strings are same

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] > str2[i]) {
        printf("First string is greater.\n");
    }
    else if (str1[i] < str2[i]) {
        printf("First string is lower.\n");
    }
    else {
        printf("Both strings are same.\n");
    }

    return 0;
}
