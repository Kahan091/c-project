//Program 26: Check Armstrong number#include <stdio.h>

#include <stdio.h>
int main() {
    int number, original, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    original = number;
    while (number != 0) {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

//Sample Input: 153
//Sample Output: Armstrong number
