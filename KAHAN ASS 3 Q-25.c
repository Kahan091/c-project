//Program 25: Check palindrome number


#include <stdio.h>
int main() {
    int number, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    while (number != 0) {
        reversed = reversed * 10 + (number % 10);
        number /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}

//Sample Input: 12321
//Sample Output: Palindrome
