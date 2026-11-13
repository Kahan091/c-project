//Program 33: Check automorphic number#include <stdio.h>

#include <stdio.h>
int main() {
    int number, square, temp, Automorphic = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    square = number * number;
    temp = number;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            Automorphic = 0;
            break;
        }
        temp /= 10;
        square /= 10;
    }

    if (Automorphic == 1) {
        printf("%d is an automorphic number.\n", number);
    } else {
        printf("%d is not an automorphic number.\n", number);
    }

    return 0;
}

//Sample Input: 25
//Sample Output: Automorphic number
