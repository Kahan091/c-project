//PROGRAM 5-Add two 2D array of same size and store the result in the 3rd one

include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2], i, j;

    printf("Enter 1st 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
