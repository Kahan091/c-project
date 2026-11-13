//PROGRAM 12-Insert a new number at the beginning of the array

#include <stdio.h>

int main() {
    int a[20];
    int i, n, item;

    printf("Enter how many numbers (max 10): ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter new number to insert at beginning: ");
    scanf("%d", &item);

    for(i = n; i > 0; i--) {
        a[i] = a[i - 1];
    }

    a[0] = item;
    n++;

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

