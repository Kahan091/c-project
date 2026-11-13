//PROGRAM 16-Delete a value from a particular position within an array.

#include <stdio.h>

int main() {
    int a[20];
    int i, n, pos;

    printf("Enter how many numbers (max 20): ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    printf("\nArray after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
