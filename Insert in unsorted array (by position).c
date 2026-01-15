#include <stdio.h>

int main(void) {
    int size, i, value, pos;

    printf("Input the size of array : ");
    scanf("%d", &size);

    /* Allocate one extra slot to hold the new value */
    int a[size + 1];

    printf("Input %d elements in the array in ascending order:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &pos);

    /* Show current list */
    printf("The current list of the array : ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    /* Shift elements to the right from the end to the given position */
    for (i = size; i > pos; i--) {
        a[i] = a[i - 1];
    }

    /* Insert new value at given position (0-based index) */
    a[pos] = value;
    size++;

    printf("\nAfter Insert the element the new list is : ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
