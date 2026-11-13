//Program 34: Fibonacci series up to n numbers

#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

//Sample Input: 8
//Sample Output: 0 1 1 2 3 5 8 13
