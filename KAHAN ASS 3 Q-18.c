//Program 18: Count boys and girls in a class of 50 (sex code)

#include <stdio.h>

int main() {
    int i, code;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (1 for Boy, 2 for Girl):\n");

    for (i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf("%d", &code);

        if (code == 1) {
            boys++;
        } else if (code == 2) {
            girls++;
        } else {
            printf("Invalid code! Please enter 1 or 2.\n");
            i--; // Repeat this student's entry
        }
    }

    printf("\nTotal Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);

    return 0;
}


