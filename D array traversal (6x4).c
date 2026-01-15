#include <stdio.h>

#define ROWS 6
#define COLS 4

int main(void) {
    int i, j;

    /* Initialize the 2D array with some values */
    int a[ROWS][COLS] = {
        {  1,  2,  3,  4},
        {  5,  6,  7,  8},
        {  9, 10, 11, 12},
        { 13, 14, 15, 16},
        { 17, 18, 19, 20},
        { 21, 22, 23, 24}
    };

    /* Traverse and print each element with its indices */
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
