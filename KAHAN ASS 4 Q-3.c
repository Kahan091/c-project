//PROGRAM 3-Accept 5 values and sort the array in either ascending or descending order
//Find out different techniques for sorting the array and also find out which one is the best technique

#include <stdio.h>

int main() {
    int arr[5], i, j, temp, choice;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter 1 for Ascending or 2 for Descending: ");
    scanf("%d", &choice);


    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) ||
                (choice == 2 && arr[j] < arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

