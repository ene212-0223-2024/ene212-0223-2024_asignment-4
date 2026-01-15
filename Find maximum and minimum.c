#include <stdio.h>

int main(void) {
    int n, i;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    int a[n];

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    /* Initialize max and min with the first element */
    int max = a[0];
    int min = a[0];

    /* Traverse to find max and min */
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
