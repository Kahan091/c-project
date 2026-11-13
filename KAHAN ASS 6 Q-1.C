//PROGRAM 1-Write a function power (a, b), to calculate the value of a raised to b.

#include <stdio.h>

long long power(int a, int b) {
    long long res = 1;
    int i;

    for (i = 1; i <= b; i++) {
        res = res * a;
    }

    return res;
}

int main() {
    int a, b;
    long long ans;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    ans = power(a, b);

    printf("%d raised to %d = %lld\n", a, b, ans);

    return 0;
}
