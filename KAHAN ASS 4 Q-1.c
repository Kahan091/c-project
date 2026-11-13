//PROGRAM 1-Accept 5 values and print them later on

#include <stdio.h>

int main() {
    int values[5];
    int i;


    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }


    printf("The 5 entered values are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}

//Input: 10 20 30 40 50
//Output: The 5 entered values are: 10 20 30 40 50
