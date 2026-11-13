//Program 16: Largest and smallest out of 100
#include<stdio.h>
int main(void) {
    int num, largest, smallest;


    printf("Enter 10 integers:\n");
    scanf("%d", &num);
    largest = num;
    smallest = num;


    for (int i = 1; i < 10; i++) {
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }


    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
//Sample Input:1 4 6 8 14 13 25 77 24 55
//Sample output: largest=77 smallest=1
