//Program 27: Find factors

#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);

    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


//Sample Input:6
//Sample Output: Factors: 1 2 3 6
