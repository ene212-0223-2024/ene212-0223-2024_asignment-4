#include <stdio.h>

int main(void) {
    int n, i, j, isUnique;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("The unique elements found in the array are: ");

    /* For each element, check if it appears exactly once */
    for (i = 0; i < n; i++) {
        isUnique = 1; /* Assume element is unique */

        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                isUnique = 0; /* Found a duplicate */
                break;
            }
        }

        if (isUnique) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");
    return 0;
}
