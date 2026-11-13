//PROGRAM 14-Insert a new number at a last position within an array.#include <stdio.h>

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

    printf("Enter new number to insert at the end: ");
    scanf("%d", &item);

    a[n] = item;
    n++;

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
