//PROGRAM 17-Delete a value from the last position.

#include <stdio.h>

int main() {
    int a[20];
    int i, n;

    printf("Enter how many numbers (max 20): ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    n--;

    printf("\nArray after deleting last element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
