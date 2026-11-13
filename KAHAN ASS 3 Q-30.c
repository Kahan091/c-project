//Program 30: Print all prime numbers between 1 and 500

#include <stdio.h>

int main() {
    int num, i, Prime;

    printf("Prime numbers between 1 and 500 are:\n");

    for (num = 2; num <= 500; num++) {
        Prime = 1;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime == 1) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
