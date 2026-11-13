//Program 23: Summation of digits#include <stdio.h>

#include <stdio.h>
int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
//Sample Input: 351
//Sample Output: Sum of digits = 9
