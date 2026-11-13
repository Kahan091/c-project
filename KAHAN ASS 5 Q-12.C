//PROGRAM 12-Print frequency of each vowel in a given string.

#include <stdio.h>

int main() {
    char str[100];
    int i, a = 0, e = 0, iv = 0, o = 0, u = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            a++;
        }
        else if (str[i] == 'e' || str[i] == 'E') {
            e++;
        }
        else if (str[i] == 'i' || str[i] == 'I') {
            iv++;
        }
        else if (str[i] == 'o' || str[i] == 'O') {
            o++;
        }
        else if (str[i] == 'u' || str[i] == 'U') {
            u++;
        }
    }

    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", iv);
    printf("o = %d\n", o);
    printf("u = %d\n", u);

    return 0;
}
