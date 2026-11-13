//PROGRAM 13-Insert a new number at a particular position within an array

#include <stdio.h>

int main() {
    int a[20];
    int i, n, pos, item;

    printf("Enter how many numbers (max 10): ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter new number: ");
    scanf("%d", &item);
    for(i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = item;
    n++;

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
