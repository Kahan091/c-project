//PROGRAM 8-Copy one array of 5 elements to another array of 10 elements skipping one element#include <stdio.h>

#include <stdio.h>
int main() {
    int a[5], b[10] = {0}, i, j = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Copying elements by skipping one index
    for(i = 0; i < 5; i++) {
        b[j] = a[i];
        j = j + 2;
    }

    printf("New array of 10 elements:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
