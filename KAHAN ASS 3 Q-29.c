//Program 29: Check prime number

#include <stdio.h>

int main() {
    int number, i, Prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        Prime = 0;
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
//Sample Input: 17
//Sample Output: Prime number
