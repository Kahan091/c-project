//PROGRAM 3-Write a recursive function to calculate factorial of a number.

#include <stdio.h>

long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else {
        printf("Factorial of %d = %lld\n", n, fact(n));
    }

    return 0;
}
n
