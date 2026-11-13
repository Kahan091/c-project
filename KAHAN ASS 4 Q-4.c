//PROGRAM 4-Print minimum no. of notes required. Notes given are 1, 2, 5, 10, 20, 50, 100, 200 & 500.
//e.g. if value is 1256, then answer is 2 notes of 500 Rs., 1 note of 200 Rs., 1 note of 50 Rs., 1 note of 5 Rs., and 1 note of 1 Rupee

#include <stdio.h>

int main() {
    int amt, i, count;
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter amount: ");
    scanf("%d", &amt);

    for(i = 0; i < 9; i++) {
        if(amt >= notes[i]) {
            count = amt / notes[i];
            amt = amt % notes[i];
            printf("%d notes of %d Rs.\n", count, notes[i]);
        }
    }

    return 0;
}
