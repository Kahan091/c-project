//PROGRAM 9-Reverse the array of maximum 5 elements

#include <stdio.h>

int main() {
    int a[5], n, i;

    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}

