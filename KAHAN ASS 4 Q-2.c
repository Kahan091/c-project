//PROGRAM 2-Accept 10 values and print 4th, 7th and 9th value

#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("4th value: %d\n", arr[3]);
    printf("7th value: %d\n", arr[6]);
    printf("9th value: %d\n", arr[8]);

    return 0;
}


//Sample Input:
//Enter 10 numbers:
//10 20 30 40 50 60 70 80 90 100

/*
Sample Output
4th value: 40
7th value: 70
9th value: 90/*

