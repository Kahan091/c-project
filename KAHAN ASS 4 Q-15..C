//PROGRAM 15-Delete a value from the first position of the array

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

    // Shift all numbers one step to the left
    for(i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // Reduce the total count by 1
    n--;

    printf("\nArray after deleting first element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
