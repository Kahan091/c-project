//PROGRAM 6-Write a function to swap two integers using call by value. Show that the original values are not changed

#include <stdio.h>

void swap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("Inside swap function: a = %d, b = %d\n", x, y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap in main: a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("After swap in main: a = %d, b = %d\n", a, b);

    return 0;
}
