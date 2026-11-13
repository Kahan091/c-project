//Program 19: Print integers 1 to 100 divisible by 5

#include <stdio.h>

int main() {
    int i;

    printf("Integers from 1 to 100 divisible by 5:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

//Sample Output: 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100
