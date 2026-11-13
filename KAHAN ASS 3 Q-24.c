//Program 24: Reverse digits


#include <stdio.h>
int main() {
    int number, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        reversed = reversed * 10 + (number % 10);
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}


//Sample Input :351
//Sample Output:Reverse = 153
