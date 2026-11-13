//Program 32: Count prime numbers between 1 and 500

#include <stdio.h>

int main() {
    int num, i, Prime, count = 0;

    for (num = 2; num <= 500; num++) {
        Prime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime == 1) {
            count++;
        }
    }

    printf("Total prime numbers between 1 and 500: %d\n", count);

    return 0;
}
//Sample Output : Count = 95
