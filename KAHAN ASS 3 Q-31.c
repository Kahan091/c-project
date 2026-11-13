//Program 31: Sum of prime numbers between 1 and 500


#include <stdio.h>

int main() {
    int num, i, Prime, sum = 0;

    for (num = 2; num <= 500; num++) {
        Prime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime == 1) {
            sum += num;
        }
    }

    printf("Sum of prime numbers between 1 and 500: %d\n", sum);

    return 0;
}

 //Sample Output: Sum = 21536
